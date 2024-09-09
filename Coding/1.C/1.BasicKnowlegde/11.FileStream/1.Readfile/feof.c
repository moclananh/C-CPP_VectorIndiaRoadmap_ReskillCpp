#include <stdio.h>

int main()
{
    FILE *file = fopen("example.txt", "r");
    if (file == NULL)
    {
        printf("Không thể mở tệp để đọc.\n");
        return 1;
    }

    char line[100];
    while (!feof(file))
    {
        if (fgets(line, sizeof(line), file) != NULL)
        {
            printf("%s", line);
        }
    }

    fclose(file);
    return 0;
}
