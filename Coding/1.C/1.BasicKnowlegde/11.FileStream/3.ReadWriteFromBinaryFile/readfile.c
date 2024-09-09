#include <stdio.h>

int main()
{
    FILE *file = fopen("example.bin", "rb");
    if (file == NULL)
    {
        printf("Không thể mở tệp để đọc.\n");
        return 1;
    }

    int data[5];
    fread(data, sizeof(int), 5, file);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", data[i]);
    }

    fclose(file);
    return 0;
}
