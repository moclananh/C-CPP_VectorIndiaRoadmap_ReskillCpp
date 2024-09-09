#include <stdio.h>

int main()
{
    FILE *file = fopen("example.txt", "r");
    if (file == NULL)
    {
        printf("Không thể mở tệp để đọc.\n");
        return 1;
    }

    char str[100];
    int num;
    while (fscanf(file, "%99s %d", str, &num) != EOF)
    {
        printf("Đọc được: %s %d\n", str, num);
    }

    fclose(file);
    return 0;
}
