#include <stdio.h>
#include <string.h>
// Định nghĩa một struct tên là Person
struct Person
{
    char name[20];
    int age;
    float height;
};

int main()
{

    struct Person person[2];
    printf("--------Enter student-----\n");
    for (int i = 0; i < 2; i++)
    {
        printf("--Student %d -- \n", i + 1);
        printf("Enter name: ");
        scanf("%s", person[i].name);
        printf("Enter age: ");
        scanf("%d", &person[i].age);
        printf("Enter height: ");
        scanf("%f", &person[i].height);
    }

    printf("------------Student List----------- \n");
    for (int i = 0; i < 2; i++)
    {
        printf("--Student %d -- \n", i + 1);
        printf("%s\n", person[i].name);
        printf("%d\n", person[i].age);
        printf("%f\n", person[i].height);
    }

    return 0;
}
