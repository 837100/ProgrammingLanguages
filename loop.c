#include <stdio.h>
#include <string.h>

char *loop(char *b, char *a)
{
    char *s = b;
    while ((*b++ = *a++))
        ;
    return s;
}

int main()
{
    char source[] = "Hello, World!";
    char destination[50];

    char *result = loop(destination, source);

    printf("Original: %s\n", source);
    printf("Copied: %s\n", result);

    return 0;
}