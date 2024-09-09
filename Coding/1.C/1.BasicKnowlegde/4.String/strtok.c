#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello,World! This is a test.";
    char *token;

    // Tách chuỗi đầu tiên dựa trên dấu phẩy
    token = strtok(str, ", ");

    // Lặp lại cho đến khi không còn token nào
    while (token != NULL)
    {
        printf("Token: %s\n", token);

        // Lấy token tiếp theo
        token = strtok(NULL, ", ");
    }

    return 0;
}
