#include <stdio.h>
#include <string.h>

int main()
{
    char src[] = "Hello, World!";
    char dest[50];

    // Sao chép chuỗi src vào dest
    strcpy(dest, src);

    // Kết quả là "Hello, World!"
    printf("Result after strcpy: %s\n", dest);

    return 0;
}
