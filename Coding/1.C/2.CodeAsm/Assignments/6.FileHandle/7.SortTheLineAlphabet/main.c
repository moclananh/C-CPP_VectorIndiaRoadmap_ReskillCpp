#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1000

char **readLines(const char *filename, int *lineCount)
{
    FILE *file = fopen(filename, "r");
    if (!file)
    {
        perror("Error opening file for reading");
        return NULL;
    }

    char **lines = NULL;
    int count = 0;
    int capacity = 10;
    lines = malloc(capacity * sizeof(char *));
    if (!lines)
    {
        perror("Memory allocation failed");
        fclose(file);
        return NULL;
    }

    char buffer[MAX_LINE_LENGTH];
    while (fgets(buffer, sizeof(buffer), file))
    {
        if (count >= capacity)
        {
            capacity *= 2;
            lines = realloc(lines, capacity * sizeof(char *));
            if (!lines)
            {
                perror("Memory allocation failed");
                fclose(file);
                return NULL;
            }
        }
        lines[count] = strdup(buffer);
        if (!lines[count])
        {
            perror("Memory allocation failed");
            fclose(file);
            return NULL;
        }
        count++;
    }
    fclose(file);

    *lineCount = count;
    return lines;
}

void sortLines(char **lines, int count)
{
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (strcmp(lines[i], lines[j]) > 0)
            {
                char *temp = lines[i];
                lines[i] = lines[j];
                lines[j] = temp;
            }
        }
    }
}

void writeLines(const char *filename, char **lines, int count)
{
    FILE *file = fopen(filename, "w");
    if (!file)
    {
        perror("Error opening file for writing");
        for (int i = 0; i < count; i++)
        {
            free(lines[i]);
        }
        free(lines);
        return;
    }

    for (int i = 0; i < count; i++)
    {
        fputs(lines[i], file);
        free(lines[i]);
    }
    free(lines);
    fclose(file);
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    int lineCount;
    char **lines = readLines(argv[1], &lineCount);
    if (!lines)
    {
        return 1;
    }

    sortLines(lines, lineCount);
    writeLines(argv[1], lines, lineCount);

    printf("Lines sorted and updated in %s.\n", argv[1]);
    return 0;
}