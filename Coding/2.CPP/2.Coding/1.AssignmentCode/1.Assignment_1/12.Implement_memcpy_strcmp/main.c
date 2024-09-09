#include <stdio.h>

void *my_memcpy(void *dest, const void *src, int n)
{
    char *destptr = (char *)dest;
    const char *srcptr = (const char *)src;
    for (int i = 0; i < n; i++)
    {
        destptr[i] = srcptr[i];
    }
    return dest;
}

int my_strcpy(const void *s1, const void *s2)
{
    const char *str1 = (const char *)s1;
    const char *str2 = (const char *)s2;
    while (*str1 != '\0' && *str2 != '\0')
    {
        if (*str1 < *str2)
            return -1;
        else if (*str1 > *str2)
            return 1;
        str1++;
        str2++;
    }
    if (*str1 == '\0' && *str2 != '\0')
        return -1;
    else if (*str1 != '\0' && *str2 == '\0')
        return 1;
    else
        return 0;
}

int main(int argc, char const *argv[])
{
    char src[] = "Hello world";
    char dest[20];

    my_memcpy(dest, src, sizeof(src));
    printf("Copied string: %s\n", dest);

    char str1[] = "Hello";
    char str2[] = "World";
    printf("Comparison str1 vs str2 is: %d", my_strcpy(str1, str2)); // output -1

    return 0;
}
