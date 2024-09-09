#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char input[100];
    int check = 0;
    printf("Enter a string: ");
    fgets(input, 100, stdin);
    input[strcspn(input, "\n")] = '\0'; // Remove the trailing newline character

    char output[100] = "";

    for (int i = 0; i < strlen(input); i++)
    {
        if (isdigit(input[i]))
        {
            check++;
            switch (input[i])
            {
            case '0':
                strcat(output, "Zero");
                break;
            case '1':
                strcat(output, "One");
                break;
            case '2':
                strcat(output, "Two");
                break;
            case '3':
                strcat(output, "Three");
                break;
            case '4':
                strcat(output, "Four");
                break;
            case '5':
                strcat(output, "Five");
                break;
            case '6':
                strcat(output, "Six");
                break;
            case '7':
                strcat(output, "Seven");
                break;
            case '8':
                strcat(output, "Eight");
                break;
            case '9':
                strcat(output, "Nine");
                break;
            default:
                break;
            }
        }
        else
        {
            strncat(output, &input[i], 1);
        }
    }
    if (!check)
    {
        printf("Not found");
        return -1;
    }

    printf("Output: %s\n", output);

    return 0;
}