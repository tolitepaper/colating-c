#include<stdio.h>

int main()
{
    char isr, isf;
    printf("有没有空？(Y/N)\n");
    scanf("%c", &isf);

    getchar(); //不写这个会把所有的都提示出来

    printf("是否下雨?(Y/N)\n");
    scanf("%c", &isr);

    if (isf == 'Y') {
        if (isr == 'Y')
    
            printf("记得带伞哦^_^\n");
    }
        else {
            printf("女神没空!T_T\n");
    }

    return 0;
}
