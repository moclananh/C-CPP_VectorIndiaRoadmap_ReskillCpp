#include <stdio.h>

int main()
{
    FILE *file = fopen("example.txt", "w");
    if (file == NULL)
    {
        printf("Không thể mở tệp để ghi.\n");
        return 1;
    }

    const char *text = "Hello, world!\nGhi file trong C rất đơn giản.\n";
    for (const char *p = text; *p != '\0'; p++)
    {
        fputc(*p, file);
    }

    fclose(file);
    return 0;
}
