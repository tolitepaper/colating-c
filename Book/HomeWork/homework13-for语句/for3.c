#include<stdio.h>

int main()
{
    int i, j;
                    //每次循环i+1，j-1
    for (i = 0, j = 10; i < j; i++, j--)
    {
        printf("%d\n", i);
    }

    return 0;
}
