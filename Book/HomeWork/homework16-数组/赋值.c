#include<stdio.h>

int main()
{             /*如果这里不给初始化0
            就会出现乱七八糟的数字*/
    int a[10] = {0};
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}