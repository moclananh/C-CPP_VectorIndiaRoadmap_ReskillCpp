#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    FILE *file;

    // Nhập chuỗi từ console
    printf("Enter string: \n");
    fgets(str, sizeof(str), stdin);

    // Mở tệp để ghi
    file = fopen("output.txt", "w");
    if (file == NULL)
    {
        printf("Không thể mở tệp để ghi.\n");
        return 1;
    }

    // Ghi chuỗi vào tệp
    fprintf(file, "%s", str);

    // Đóng tệp
    fclose(file);

    // Mở tệp để đọc
    file = fopen("output.txt", "r");
    if (file == NULL)
    {
        printf("Không thể mở tệp để đọc.\n");
        return 1;
    }

    // Đọc chuỗi từ tệp
    char buffer[100];
    if (fgets(buffer, sizeof(buffer), file) != NULL)
    {
        printf("File data: %s\n", buffer);
    }

    // Đóng tệp
    fclose(file);

    return 0;
}
