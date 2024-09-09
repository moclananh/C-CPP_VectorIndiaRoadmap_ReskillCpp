#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cnt = 0;

void print_menu()
{
    printf("***Name Data Base ***\n"
           "i : input\n"
           "d : delete\n"
           "p : print\n"
           "s : sort\n"
           "f : find\n"
           "q : quit\n"
           "...Enter choice: ");
}

char *getString(char *str, int maxLen)
{
    if (fgets(str, maxLen, stdin) == NULL)
    {
        return NULL;
    }
    str[strcspn(str, "\n")] = '\0'; // Remove the trailing newline
    return str;
}

void *input(char **names)
{
    char *newName = (char *)malloc(sizeof(char) * 20);
    printf("Enter name: ");
    if (getString(newName, 20) == NULL)
    {
        free(newName);
        return names;
    }
    names = (char **)realloc(names, sizeof(char *) * (cnt + 1));
    names[cnt++] = newName;
    printf("Name inserted successfully...!!!\n");
    return names;
}

void print(char **names)
{
    if (cnt == 0)
    {
        printf("Database is empty. No names to print.\n");
        return;
    }
    for (int i = 0; i < cnt; i++)
    {
        printf("Name %d: %s\n", i, names[i]);
    }
}

void *delete(char **names)
{
    if (cnt == 0)
    {
        printf("Database is empty. Nothing to delete.\n");
        return names;
    }
    int index;
    printf("Enter index to delete: ");
    if (scanf("%d", &index) != 1)
    {
        printf("Invalid input. Aborting...\n");
        // Clear the input buffer
        int c;
        while ((c = getchar()) != '\n' && c != EOF)
            ;
        return names;
    }
    if (index < 0 || index >= cnt)
    {
        printf("Invalid index. No name to delete.\n");
        return names;
    }
    free(names[index]);
    for (int i = index; i < cnt - 1; i++)
    {
        names[i] = names[i + 1];
    }
    names = (char **)realloc(names, sizeof(char *) * (--cnt));
    printf("Name deleted successfully...!!!\n");
    return names;
}

void sort(char **names)
{
    for (int i = 0; i < cnt - 1; i++)
    {
        for (int j = 0; j < cnt - i - 1; j++)
        {
            if (strcmp(names[j], names[j + 1]) > 0)
            {
                char *temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }
    printf("Sorted the Data Base...\n");
}

void find(char **names)
{
    char *searchName = (char *)malloc(sizeof(char) * 20);
    printf("Enter name to search: ");
    if (getString(searchName, 20) == NULL)
    {
        free(searchName);
        return;
    }
    for (int i = 0; i < cnt; i++)
    {
        if (strcmp(names[i], searchName) == 0)
        {
            printf("Name found at index %d\n", i);
            free(searchName);
            return;
        }
    }
    printf("Name not found in the database.\n");
    free(searchName);
}

int main()
{
    char **names = NULL;
    char choice;
    while (1)
    {
        print_menu();
        scanf("%c", &choice);
        fflush(stdin); // Clear the input buffer

        switch (choice)
        {
        case 'i':
            names = input(names);
            break;
        case 'd':
            names = delete (names);
            break;
        case 'p':
            print(names);
            break;
        case 's':
            sort(names);
            break;
        case 'f':
            find(names);
            break;
        case 'q':
            printf("***Thanks for using name database***\n");
            for (int i = 0; i < cnt; i++)
            {
                free(names[i]);
            }
            free(names);
            return 0;
        default:
            printf("Invalid choice...!!!\n");
        }
    }
    return 0;
}