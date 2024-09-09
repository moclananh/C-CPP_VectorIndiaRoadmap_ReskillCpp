#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello, World!";

    // Sao chép 7 ký tự từ vị trí 7 (tính từ 0) sang vị trí 0 của str
    memmove(str, str + 7, 7);

    // Kết quả là "World!World!"
    printf("Result after memmove: %s\n", str);

    // NOTE: memove not be overlap when copy.
    return 0;
}
