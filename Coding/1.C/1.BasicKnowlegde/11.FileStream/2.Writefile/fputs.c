#include <stdio.h>

int main()
{
    FILE *file = fopen("example.txt", "w");
    if (file == NULL)
    {
        printf("Không thể mở tệp để ghi.\n");
        return 1;
    }

    fputs("Hello, world!\n", file);
    fputs("Ghi file trong C rất đơn giản.\n", file);

    fclose(file);
    return 0;
}
