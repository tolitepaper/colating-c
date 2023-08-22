#include<stdio.h>

int main()
{
    char ch;

    printf("成绩仅可为A,B,C,D,E！\n");
    printf("请输入成绩：");
    scanf("%c", &ch);

    switch(ch)

    {
    case 'A':                             //**不写break你试试
        printf("你的成绩在90分以上！\n"); break;
    case 'B':
        printf("你的成绩在80分~90分之间！\n"); break;
    case 'C':
        printf("你的成绩在70分~80分之间！\n"); break;
    case 'D':
        printf("你的成绩在60分~70分之间！\n"); break;
    case 'E':
        printf("你的成绩在60分以下！\n"); break;
    default:
        printf("你瞎写你马呢？\n"); break;
    }

        return 0;
}
