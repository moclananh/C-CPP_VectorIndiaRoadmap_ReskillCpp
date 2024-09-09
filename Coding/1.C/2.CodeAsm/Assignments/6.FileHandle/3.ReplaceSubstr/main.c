#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUFFER_SIZE 1000

void reverseString(char *str)
{
    int left = 0, right = strlen(str) - 1;
    while (left < right)
    {
        char temp = str[left];
        str[left++] = str[right];
        str[right--] = temp;
    }
}

void replaceOccurrences(FILE *inputFile, FILE *outputFile, const char *substr, const char *reversedSubstr)
{
    char line[BUFFER_SIZE];
    while (fgets(line, sizeof(line), inputFile))
    {
        char *pos = line;
        while ((pos = strstr(pos, substr)) != NULL)
        {
            fwrite(line, 1, pos - line, outputFile);
            fputs(reversedSubstr, outputFile);
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
        fprintf(stderr, "Usage: %s <filename> <substr> <newfile>\n", argv[0]);
        return 1;
    }

    const char *filename = argv[1];
    const char *substr = argv[2];
    const char *newfile = argv[3];

    // Cấp phát động cho chuỗi đảo ngược
    int substrLen = strlen(substr);
    char *reversedSubstr = malloc(substrLen + 1);
    if (reversedSubstr == NULL)
    {
        perror("malloc");
        return 1;
    }

    strcpy(reversedSubstr, substr);
    reverseString(reversedSubstr);

    FILE *inputFile = fopen(filename, "r");
    if (!inputFile)
    {
        perror("Error opening input file");
        free(reversedSubstr);
        return 1;
    }

    FILE *outputFile = fopen(newfile, "w");
    if (!outputFile)
    {
        perror("Error opening output file");
        fclose(inputFile);
        free(reversedSubstr);
        return 1;
    }

    replaceOccurrences(inputFile, outputFile, substr, reversedSubstr);

    fclose(inputFile);
    fclose(outputFile);
    free(reversedSubstr);

    printf("Replaced all occurrences of '%s' with '%s' in %s and saved to %s.\n", substr, reversedSubstr, filename, newfile);
    return 0;
}

//  ./program input.txt substr output.txt