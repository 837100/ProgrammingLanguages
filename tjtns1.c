// 컴파일러에 따라 출력이 다름. 
// gcc 11.3.0 컴파일러에서는 "happy Be 9 friends."" 로 출력됨.
// Clang(LLVM)환경에서는 "Be happy 9 friends.""로 출력됨.
#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    printf("%d friends. \n",
           add(printf("Be "), printf("happy ")));
    return 0;
}

