#include<stdio.h>

int main()
{
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {//**?当内层循环执行完毕之后外层循环才执行一次
            printf("i = %d, j = %d\n", i, j);
        }
    }

    return 0;
}
