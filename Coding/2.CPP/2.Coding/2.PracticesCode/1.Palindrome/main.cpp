#include <iostream>
using namespace std;
int isPali(string str)
{
    int left = 0;
    int right = str.length() - 1;
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
    string str;
    cin >> str;

    if (isPali(str))
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Non-Palindrome");
    }

    return 0;
}