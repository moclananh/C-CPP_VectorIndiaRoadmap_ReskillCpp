#include <stdio.h>

int main()
{
    FILE *file = fopen("example.bin", "wb");
    if (file == NULL)
    {
        printf("Không thể mở tệp để ghi.\n");
        return 1;
    }

    int data[] = {1, 2, 3, 4, 5};
    fwrite(data, sizeof(int), 5, file);

    fclose(file);
    return 0;
}
