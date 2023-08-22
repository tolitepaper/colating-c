#include<stdio.h>

int main()
{
    int a[10], i; //**这里是故意越界的
    for (i = 0; i <= 10; i++)
    {
        a[i] = i;
    }


    for (i = 0; i <= 10; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}
//**C99在数组越界上做了保护，才使得程序不会出现毁灭性错误
