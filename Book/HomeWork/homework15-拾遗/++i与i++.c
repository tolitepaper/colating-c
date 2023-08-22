#include<stdio.h>

int main()
{
    int i = 5, j;

    j = ++i;//**!先给i加一，然后赋值给j。
    printf("i = %d, j = %d\n", i, j);

    i = 5;
    j = i++;//**! 先给j赋上i值，然后再让j加一。
    printf("i = %d, j = %d\n", i, j);

    return 0;
}
