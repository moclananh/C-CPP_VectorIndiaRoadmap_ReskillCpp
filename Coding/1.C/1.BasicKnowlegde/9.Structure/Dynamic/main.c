#include <stdio.h>
#include <stdlib.h>
struct A
{
    int x;
    int y;
};
int main()
{
    struct A *p;
    p = (struct A *)malloc(sizeof(struct A));

    printf("enter data .. \n");
    scanf("%d %d", &p->x, &p->y);

    printf("%d %d\n", p->x, p->y);
}