#include <stdio.h>

// Định nghĩa enum Day
typedef enum
{
    Dev1,
    Dev2,
    Dev3,
    Dev4

} Level;

typedef struct
{
    int id;
    Level daychoose;
} Person;

int main()
{
    Person st = {1, 1};

    printf("Student id = %d, level: %d", st.id, st.daychoose);
    return 0;
}
