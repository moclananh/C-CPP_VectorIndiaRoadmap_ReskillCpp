#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define BUFFER_SIZE 1000

void convertFirstLastToUpper(FILE *inputFile, FILE *outputFile)
{
    char buffer[BUFFER_SIZE];
    while (fgets(buffer, BUFFER_SIZE, inputFile))
    {
        int len = strlen(buffer);
        int start = -1;
        for (int i = 0; i < len; i++)
        {
            if (isalpha(buffer[i]))
            {
                if (start == -1)
                {
                    start = i;
                }
            }
            else
            {
                if (start != -1)
                {
                    buffer[start] = toupper(buffer[start]);
                    buffer[i - 1] = toupper(buffer[i - 1]);
                    start = -1;
                }
            }
        }
        if (start != -1) // Case where the last word might end at the end of the line
        {
            buffer[start] = toupper(buffer[start]);
            buffer[len - 1] = toupper(buffer[len - 1]);
        }
        fputs(buffer, outputFile);
    }
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    const char *filename = argv[1];

    FILE *inputFile = fopen(filename, "r");
    if (!inputFile)
    {
        perror("Error opening input file");
        return 1;
    }

    FILE *outputFile = fopen("output.txt", "w");
    if (!outputFile)
    {
        perror("Error opening output file");
        fclose(inputFile);
        return 1;
    }

    convertFirstLastToUpper(inputFile, outputFile);
    printf("Converted !\n");
    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
