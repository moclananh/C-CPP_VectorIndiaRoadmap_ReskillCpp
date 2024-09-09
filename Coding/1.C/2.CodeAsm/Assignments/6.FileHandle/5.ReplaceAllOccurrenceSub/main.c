#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUFFER_SIZE 1000

void replaceOccurrences(FILE *inputFile, FILE *outputFile, const char *substr, const char *replaceWith)
{
    char line[BUFFER_SIZE];
    while (fgets(line, sizeof(line), inputFile))
    {
        char *pos = line;
        while ((pos = strstr(pos, substr)) != NULL)
        {
            fwrite(line, 1, pos - line, outputFile);
            fputs(replaceWith, outputFile);
            pos += strlen(substr);
            memmove(line, pos, strlen(pos) + 1);
            pos = line;
        }
        fputs(line, outputFile);
    }
}

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        fprintf(stderr, "Usage: %s <filename> <substr> <replaceWith>\n", argv[0]);
        return 1;
    }

    const char *filename = argv[1];
    const char *substr = argv[2];
    const char *replaceWith = argv[3];

    FILE *inputFile = fopen(filename, "r");
    if (!inputFile)
    {
        perror("Error opening input file");
        return 1;
    }

    char newFilename[256];
    snprintf(newFilename, sizeof(newFilename), "output.txt");
    FILE *outputFile = fopen(newFilename, "w");
    if (!outputFile)
    {
        perror("Error opening output file");
        fclose(inputFile);
        return 1;
    }

    replaceOccurrences(inputFile, outputFile, substr, replaceWith);

    fclose(inputFile);
    fclose(outputFile);

    printf("Replaced all occurrences of '%s' with '%s' in %s and saved to %s.\n", substr, replaceWith, filename, newFilename);
    return 0;
}

// ./program input.txt substr replaceWith