#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void grep(const char *filename, const char *searchTerm)
{
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        perror("Error opening file");
        return;
    }

    char line[1000];
    int lineNumber = 1;
    int check = 0;

    while (fgets(line, sizeof(line), file))
    {
        if (strstr(line, searchTerm) != NULL)
        {
            printf("File name: %s\n Line number: %d\n Line: %s\n", filename, lineNumber, line);
            check++;
        }

        lineNumber++;
    }
    if (!check)
    {
        printf("Not found!\n");
    }

    fclose(file);
}

int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        fprintf(stderr, "Usage: %s <searchTerm> <file1> <file2> ... <fileN>\n", argv[0]);
        return 1;
    }

    const char *searchTerm = argv[1];
    for (int i = 2; i < argc; i++)
    {
        grep(argv[i], searchTerm);
    }

    return 0;
}
// ./program keyword file.txt