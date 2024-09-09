#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 256
#define INITIAL_SIZE 10

int compareLines(const void *a, const void *b)
{
    const char *lineA = *(const char **)a;
    const char *lineB = *(const char **)b;
    return strlen(lineA) - strlen(lineB);
}

void sortLinesInFile(const char *filename)
{
    FILE *file = fopen(filename, "r");
    if (!file)
    {
        perror("Error opening file");
        return;
    }

    // Đọc các dòng vào mảng
    int capacity = INITIAL_SIZE;
    int count = 0;
    char **lines = malloc(capacity * sizeof(char *));
    if (!lines)
    {
        perror("Memory allocation failed");
        fclose(file);
        return;
    }

    char buffer[MAX_LINE_LENGTH];
    while (fgets(buffer, sizeof(buffer), file))
    {
        buffer[strcspn(buffer, "\n")] = '\0';

        if (count >= capacity)
        {
            capacity *= 2;
            lines = realloc(lines, capacity * sizeof(char *));
            if (!lines)
            {
                perror("Memory allocation failed");
                fclose(file);
                return;
            }
        }

        lines[count] = strdup(buffer);
        if (!lines[count])
        {
            perror("Memory allocation failed");
            fclose(file);
            return;
        }
        count++;
    }
    fclose(file);

    // Sort by leng
    qsort(lines, count, sizeof(char *), compareLines);

    file = fopen(filename, "w");
    if (!file)
    {
        perror("Error opening file for writing");
        for (size_t i = 0; i < count; i++)
        {
            free(lines[i]);
        }
        free(lines);
        return;
    }

    for (int i = 0; i < count; i++)
    {
        fprintf(file, "%s\n", lines[i]);
        free(lines[i]);
    }
    free(lines);
    fclose(file);
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    sortLinesInFile(argv[1]);
    printf("Sorted lines by length and updated the file: %s\n", argv[1]);
    return 0;
}

// ./program file.txt
