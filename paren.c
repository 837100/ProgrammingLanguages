#include <stdio.h>
#include <stdlib.h>

int LA = 0;
int nexttoken() {
    int c = getchar();
    printf("Read: %d ('%c')\n", c, c < 32 ? '?' : c);  // 디버그 출력
    return c;
}

void error(char c)
{
    printf("Syntax error near '%c'.\n", c);
    exit(-1);
}

void match(int token)
{
    if (LA == token)
        LA = nexttoken();
    else
        error(token);
}

void L(), S();

void L()
{
    if (LA == EOF)
        ;
    else
    {
        S();
        match('\n');
        L();
    }
}

void S()
{
    if (LA == '(')
    {
        match('(');
        S();
        match(')');
        S();
    }
    else
        ;
}

int main()
{
    LA = nexttoken();
    L();
    return 0;
}