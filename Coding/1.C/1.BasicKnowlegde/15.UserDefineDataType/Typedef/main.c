#include <stdio.h>
typedef unsigned long ulong;
typedef int *IntPointer;
typedef struct
{
    char name[50];
    int age;
} Person;

// Định nghĩa enum Color
typedef enum
{
    RED,
    GREEN,
    BLUE
} Color;

int main()
{
    Person person1;

    // Gán giá trị cho các trường của cấu trúc
    strcpy(person1.name, "Alice");
    person1.age = 30;

    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);

    Color favoriteColor = BLUE;

    if (favoriteColor == BLUE)
    {
        printf("Favorite color is blue.\n");
    }

    return 0;
}
