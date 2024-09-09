#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void hideOccurrences(char *line, const char *substr)
{
    char *pos;
    int index = 0;
    int substrLen = strlen(substr);

    char *result = malloc(strlen(line) + 1);
    if (!result)
    {
        perror("malloc");
        exit(EXIT_FAILURE);
    }
    result[0] = '\0';

    while ((pos = strstr(line + index, substr)) != NULL)
    {
        strncat(result, line + index, pos - (line + index));
        strcat(result, "");
        index = (pos - line) + substrLen;
    }
    strcat(result, line + index);
    strcpy(line, result);
    free(result);
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

    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        perror("Error opening file");
        return 1;
    }

    FILE *outputFile = fopen(newfile, "w");
    if (outputFile == NULL)
    {
        perror("Error opening output file");
        fclose(file);
        return 1;
    }

    char *line = NULL;
    int len = 0;
    int read;

    while ((read = getline(&line, &len, file)) != -1)
    {
        hideOccurrences(line, substr);
        fputs(line, outputFile);
    }

    free(line);
    fclose(file);
    fclose(outputFile);

    printf("All occurrences of '%s' have been hidden in %s and saved to %s.\n", substr, filename, newfile);
    return 0;
}
// ./program input.txt substr output.txt