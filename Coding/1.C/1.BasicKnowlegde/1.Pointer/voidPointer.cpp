#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    char ch = 'a';
    void *p = &x;             // void pointer (generic pointer)
    printf("%d ", *(int *)p); // must to typecasting

    p = &ch;
    printf("%c ", *(char *)p); // type casting
}