#include <stdio.h>
#include <string.h>

// 목적지(destination), 출발지(source)
char *custom_strcpy(char dst[], const char src[])
{
    int i;
    for (i = 0; src[i] != '\0'; ++i)
        dst[i] = src[i];
    dst[i] = '\0';
    return dst;
}

int main()
{
    char source[] = "Hello, World!";
    char destination[50];

    char *result = custom_strcpy(destination, source);

    printf("Original: %s\n", source);
    printf("Copied: %s\n", result);

    return 0;
}