#include <stdio.h>

int main()
{
    FILE *file = fopen("example.txt", "r");
    if (file == NULL)
    {
        printf("Không thể mở tệp để đọc.\n");
        return 1;
    }

    int c;
    while ((c = fgetc(file)) != EOF)
    {
        putchar(c);
    }

    fclose(file);
    return 0;
}
