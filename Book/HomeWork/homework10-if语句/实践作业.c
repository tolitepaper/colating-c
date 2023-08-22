#include<stdio.h>

int main()
{
    int i;
    printf("请输入宁的成绩：\n");
    scanf("%d", &i);

    if (i >= 90)
    {
        printf("考的真好\n");
    }
    else if (i >= 70 && i < 90)
    {
        printf("考的一般\n");
    }
    else if (i >= 60 && i < 70)
    {
        printf("考的很差\n");
    }
    else
    {
        printf("退学吧孩子\n");
    }

    return 0;

}
