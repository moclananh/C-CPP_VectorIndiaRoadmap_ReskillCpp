#include <stdio.h>

// Khai báo biến toàn cục extern
extern int sharedVar;

int main()
{
    // Sử dụng biến toàn cục được khai báo ở tệp khác
    printf("Shared variable: %d\n", sharedVar);
    return 0;
}
