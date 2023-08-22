#include<stdio.h>

int main()
{
    int i, j;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {         //当j达到3，跳出此for循环(内)
            if(j == 3)
            {
                break;
            }
        }
        //当j达到3，跳出此for循环(主)
        if(j == 3)
        {
            break;
        }
    }

    printf("i = %d, j = %d", i, j);
    putchar('\n');

    return 0;
}
