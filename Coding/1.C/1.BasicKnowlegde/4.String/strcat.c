#include <stdio.h>
#include <string.h>

int main()
{
    char dest[50] = "Hello, ";
    char src[] = "World!";

    // Nối chuỗi src vào cuối chuỗi dest
    strcat(dest, src);

    // Kết quả là "Hello, World!"
    printf("Result after strcat: %s\n", dest);

    return 0;
}
