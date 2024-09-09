#include <stdio.h>
#include <string.h>

#define cols 20
#define rows 5
int cnt = 0;

void print_menu()
{
    printf("***Name Data Base ***\n"
           "i : input\n"
           "d : delete\n"
           "p : print\n"
           "s : sort\n"
           "q : quit\n"
           "...Enter choice: ");
}

void input(char (*p)[cols])
{
    if (cnt == rows)
    {
        printf("Database is full. Cannot add more names.\n");
        return;
    }
    printf("Enter name: ");
    fgets(p[cnt], cols, stdin);
    p[cnt][strcspn(p[cnt], "\n")] = '\0'; // Remove the trailing newline
    printf("Name inserted successfully...!!!\n");
    cnt++;
}

void delete(char (*p)[cols])
{
    if (cnt == 0)
    {
        printf("Database is empty. Nothing to delete.\n");
        return;
    }
    int index;
    printf("Enter index to delete: ");
    scanf("%d", &index);
    if (index < 0 || index >= cnt)
    {
        printf("Invalid index. No name to delete.\n");
        return;
    }
    for (int i = index; i < cnt - 1; i++)
    {
        strcpy(p[i], p[i + 1]);
    }
    cnt--;
    printf("Name deleted successfully...!!!\n");
}

void print(char (*p)[cols])
{
    if (cnt == 0)
    {
        printf("Database is empty. No names to print.\n");
        return;
    }
    for (int i = 0; i < cnt; i++)
    {
        printf("Name %d: %s\n", i, p[i]);
    }
}

void sort(char (*p)[cols])
{
    for (int i = 0; i < cnt - 1; i++)
    {
        for (int j = 0; j < cnt - i - 1; j++)
        {
            if (strcmp(p[j], p[j + 1]) > 0)
            {
                char temp[cols];
                strcpy(temp, p[j]);
                strcpy(p[j], p[j + 1]);
                strcpy(p[j + 1], temp);
            }
        }
    }
    printf("Sorted the Data Base...\n");
}

int main()
{
    char names[rows][cols];
    char choice;
    while (1)
    {
        print_menu();

        scanf("%c", &choice);
        fflush(stdin); // Clear the input buffer
        switch (choice)
        {
        case 'i':
            input(names);
            break;
        case 'd':
            delete (names);
            break;
        case 'p':
            print(names);
            break;
        case 's':
            sort(names);
            break;
        case 'q':
            printf("***Thanks for using name database***\n");
            return 0;
        default:
            printf("Invalid choice...!!!\n");
        }
    }
    return 0;
}