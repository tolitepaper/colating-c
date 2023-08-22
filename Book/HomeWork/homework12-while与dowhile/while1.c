#include<stdio.h>

int main()
{
    int i = 1, sum = 0;
    while (i <= 100)
    {
        sum = sum + i;
        i = i + 1;
    }
    printf("结果为%d\n", sum);
    //**! while里输出和外输出是不一样的

    return 0;
}
