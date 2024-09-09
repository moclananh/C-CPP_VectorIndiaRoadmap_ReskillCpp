#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 100
#define FILENAME "students.txt"

typedef struct
{
    int id;
    char name[MAX_NAME_LENGTH];
    float grade;
} Student;

void saveToFile(Student *students, int count)
{
    FILE *file = fopen(FILENAME, "w");
    if (!file)
    {
        perror("Error opening file for writing");
        return;
    }

    for (int i = 0; i < count; i++)
    {
        fprintf(file, "%d,%s,%f\n", students[i].id, students[i].name, students[i].grade);
    }

    fclose(file);
    printf("Data saved to %s.\n", FILENAME);
}

int syncFromFile(Student **students)
{
    FILE *file = fopen(FILENAME, "r");
    if (!file)
    {
        perror("Error opening file for reading");
        return 0;
    }

    int capacity = 10;
    int count = 0;
    *students = malloc(capacity * sizeof(Student));
    if (!*students)
    {
        perror("Memory allocation failed");
        fclose(file);
        return 0;
    }

    while (fscanf(file, "%d,%99[^,],%f\n", &(*students)[count].id, (*students)[count].name, &(*students)[count].grade) == 3)
    {
        count++;
        if (count >= capacity)
        {
            capacity *= 2;
            *students = realloc(*students, capacity * sizeof(Student));
            if (!*students)
            {
                perror("Memory allocation failed");
                fclose(file);
                return 0;
            }
        }
    }

    fclose(file);
    printf("Data synced from %s.\n", FILENAME);
    return count;
}

int main()
{
    int studentCount;

    printf("Enter the number of students: ");
    scanf("%zu", &studentCount);

    Student *students = malloc(studentCount * sizeof(Student));
    if (!students)
    {
        perror("Memory allocation failed");
        return 1;
    }
    for (int i = 0; i < studentCount; i++)
    {
        printf("Enter details for student %zu\n", i + 1);
        printf("ID: ");
        scanf("%d", &students[i].id);
        getchar(); // read \n

        printf("Name: ");
        fgets(students[i].name, MAX_NAME_LENGTH, stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0;

        printf("Grade: ");
        scanf("%f", &students[i].grade);
        getchar();
    }

    saveToFile(students, studentCount);

    Student *loadedStudents = NULL;
    int loadedCount = syncFromFile(&loadedStudents);

    for (int i = 0; i < loadedCount; i++)
    {
        printf("ID: %d, Name: %s, Grade: %.2f\n", loadedStudents[i].id, loadedStudents[i].name, loadedStudents[i].grade);
    }

    free(students);
    free(loadedStudents);

    return 0;
}
