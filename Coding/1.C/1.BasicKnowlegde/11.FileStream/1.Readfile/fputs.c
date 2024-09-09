// char *fgets(char *s, int size, FILE *stream);
// int fputs(const char *s, FILE *stream);
#include <stdio.h>
int main()
{
    FILE *fp;
    int ret;
    char arr[100];
    fp = fopen("example.txt", "w");
    if (fp == NULL)
    {
        printf("file not opened .. \n");
        return 0;
    }
    printf("enter data to write into file\n");
    scanf("%s", arr);
    ret = fputs(arr, fp);
    if (ret == EOF)
    {
        printf("Data unable to write");
    }
}