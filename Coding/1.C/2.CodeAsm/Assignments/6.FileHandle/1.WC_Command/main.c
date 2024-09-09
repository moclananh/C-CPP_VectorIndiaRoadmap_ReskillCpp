#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void wc(const char *filename)
{
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        perror("Error opening file");
        return;
    }

    int lines = 0, words = 0, characters = 0;
    int inWord = 0;
    char c;

    while ((c = fgetc(file)) != EOF)
    {
        characters++;
        if (c == '\n')
        {
            lines++;
        }

        if (isspace(c))
        {
            inWord = 0;
        }
        else if (inWord == 0)
        {
            inWord = 1;
            words++;
        }
    }

    fclose(file);

    printf(" %d %d %d %s\n", lines, words, characters, filename);
}

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        fprintf(stderr, "Usage: %s <file1> <file2> ... <fileN>\n", argv[0]);
        return 1;
    }

    for (int i = 1; i < argc; i++)
    {
        wc(argv[i]);
    }

    return 0;
}

// ./program file1.txt