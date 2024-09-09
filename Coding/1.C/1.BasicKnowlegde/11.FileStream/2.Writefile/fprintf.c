#include <stdio.h>

int main()
{
    // Mở tệp để ghi
    FILE *file = fopen("example.txt", "w");

    // Kiểm tra xem tệp đã mở thành công chưa
    if (file == NULL)
    {
        printf("Can not open file.\n");
        return 1;
    }

    // Ghi một chuỗi văn bản vào tệp
    fprintf(file, "Hello, world!\n");

    // Đóng tệp
    fclose(file);

    printf("Successflly.\n");

    return 0;
}
