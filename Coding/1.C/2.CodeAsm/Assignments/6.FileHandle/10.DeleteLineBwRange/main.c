#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1000

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        printf("Usage: %s <filename> <start_line> <end_line>\n", argv[0]);
        return 1;
    }

    const char *filename = argv[1];
    int start_line = atoi(argv[2]);
    int end_line = atoi(argv[3]);

    FILE *file = fopen(filename, "r");
    if (!file)
    {
        perror("Error opening file");
        return 1;
    }

    char **lines = NULL;
    int count = 0;
    int capacity = 10;
    lines = malloc(capacity * sizeof(char *));
    if (!lines)
    {
        perror("Memory allocation failed");
        fclose(file);
        return 1;
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
                return 1;
            }
        }
        lines[count] = strdup(buffer);
        if (!lines[count])
        {
            perror("Memory allocation failed");
            fclose(file);
            return 1;
        }
        count++;
    }
    fclose(file);

    file = fopen(filename, "w");
    if (!file)
    {
        perror("Error opening file for writing");
        for (int i = 0; i < count; i++)
        {
            free(lines[i]);
        }
        free(lines);
        return 1;
    }

    for (int i = 0; i < count; i++)
    {
        if (i + 1 < start_line || i + 1 > end_line)
        {
            fputs(lines[i], file);
        }
        free(lines[i]);
    }
    free(lines);
    fclose(file);

    printf("Lines between %d and %d deleted from %s.\n", start_line, end_line, filename);
    return 0;
}