#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    FILE *file;

    // Nhập chuỗi từ console
    printf("Nhập một chuỗi (bao gồm khoảng trắng nếu có): ");
    fgets(str, sizeof(str), stdin);

    // Xóa ký tự newline nếu có
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
    }

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

    // Di chuyển con trỏ tệp đến đầu tệp
    fseek(file, 0, SEEK_SET);

    // Hiển thị vị trí của con trỏ tệp trước khi đọc
    long pos_before = ftell(file);
    printf("Vị trí của con trỏ tệp trước khi đọc: %ld\n", pos_before);

    // Đọc chuỗi từ tệp
    char buffer[100];
    if (fgets(buffer, sizeof(buffer), file) != NULL)
    {
        printf("Chuỗi từ tệp: %s\n", buffer);
    }

    // Hiển thị vị trí của con trỏ tệp sau khi đọc
    long pos_after = ftell(file);
    printf("Vị trí của con trỏ tệp sau khi đọc: %ld\n", pos_after);

    // Di chuyển con trỏ tệp đến cuối tệp
    fseek(file, 0, SEEK_END);

    // Hiển thị vị trí của con trỏ tệp tại cuối tệp
    long pos_end = ftell(file);
    printf("Vị trí của con trỏ tệp tại cuối tệp: %ld\n", pos_end);

    // Đóng tệp
    fclose(file);

    return 0;
}
