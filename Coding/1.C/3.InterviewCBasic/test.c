#include <stdio.h>
#include <string.h>

int isPali(char str[])
{
  int left = 0;
  int right = strlen(str) - 1;
  while (left < right)
  {
    if (str[left] != str[right])
    {
      return 0;
    }
    left++;
    right--;
  }
  return 1;
}

int main()
{
  char str[100];
  fgets(str, sizeof(str), stdin);

  str[strcspn(str, "\n")] = '\0';
  if (isPali(str))
  {
    printf("palin\n");
  }
  else
  {
    printf("not");
  }

  return 0;
}