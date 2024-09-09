#include <stdio.h>
#include <string.h>
// Định nghĩa một struct tên là Person
struct Person
{
    char name[50];
    int age;
    float height;
};

int main()
{
    // Khai báo một biến kiểu struct Person
    struct Person person1;

    // Gán giá trị cho các thành phần của struct
    strcpy(person1.name, "Nguyen Van A");
    person1.age = 30;
    person1.height = 1.75;

    // In các giá trị của struct
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.2f\n", person1.height);

    return 0;
}
