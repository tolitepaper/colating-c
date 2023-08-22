#include<stdio.h>

int main()
{
    char a;

    printf("小花你有男朋友吗？(Y/N): \n");
    scanf("%c", a);

    if (a == 'Y')
    {
        printf("祝你幸福!\n");
    }
    else
    {
        printf("那我们在一起8!\n");
    }

    return 0;
}
