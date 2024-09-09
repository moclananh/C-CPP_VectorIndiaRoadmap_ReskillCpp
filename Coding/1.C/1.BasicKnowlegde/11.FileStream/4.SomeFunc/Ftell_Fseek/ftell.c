#include <stdio.h>
int main()
{

    FILE *fp;
    char ch;
    int pos;
    fp = fopen("text.txt", "r");

    if (fp == NULL)
    {
        printf("file not opened .. \n");
        return 0;
    }

    fseek(fp, -5, SEEK_END);
    ch = fgetc(fp);
    pos = ftell(fp);
    printf("ch=%c pos=%d\n", ch, pos);
}