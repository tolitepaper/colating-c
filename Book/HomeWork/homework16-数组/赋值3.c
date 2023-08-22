#include<stdio.h>

int main()
{
    int a[10] = {[3] = 3, [5] =5, [8] = 8};
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("%d\n", a[i]);
    }
              //**!这里要用win系统下的无符号长整型%I64u而不是%d
    printf("%I64u\n", sizeof(a));

    return 0;
}
