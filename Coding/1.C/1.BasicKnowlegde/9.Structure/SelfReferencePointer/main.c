#include <stdio.h>
#include <stdlib.h>
struct address
{
    char street[50];
    char city[50];
    char state[50];
    int pin;
};
struct dob
{
    int day;
    int month;
    int year;
};
struct student
{
    char name[50];
    int id;
    struct address a;
    struct dob d;
};

int main()
{
    struct student s = {"sahasra", 100, {"2nd street", "chennai", "tamilnadu", 600089}, {27, 7, 2000}};
    printf("Student Id: %d\n", s.id);
    printf("Student address: %s %s %s %d\n", s.a.street, s.a.city, s.a.state, s.a.pin);
    printf("DOB: %d %d %d\n", s.d.day, s.d.month, s.d.year);
}