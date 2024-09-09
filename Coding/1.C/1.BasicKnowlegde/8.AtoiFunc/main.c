#include <stdio.h>
#include <stdlib.h>

int main()
{
    const char *str1 = "12345";
    const char *str2 = "   -6789";
    const char *str3 = "42abc";
    const char *str4 = "abc42";

    int num1 = atoi(str1);
    int num2 = atoi(str2);
    int num3 = atoi(str3);
    int num4 = atoi(str4);

    printf("Chuỗi \"%s\" được chuyển thành số nguyên: %d\n", str1, num1);
    printf("Chuỗi \"%s\" được chuyển thành số nguyên: %d\n", str2, num2);
    printf("Chuỗi \"%s\" được chuyển thành số nguyên: %d\n", str3, num3);
    printf("Chuỗi \"%s\" được chuyển thành số nguyên: %d\n", str4, num4);

    return 0;
}
