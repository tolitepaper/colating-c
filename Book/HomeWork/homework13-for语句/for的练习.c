#include<stdio.h>
#include <stdbool.h>
int main()
{
    int i, num;
    _Bool flag = 1;

    printf("请输入一个整数: ");
    scanf("%d", &num);
          //i初始化为2
    for (i = 2; i < num / 2; i++)
    {       //当number余i等于0，不是素数
        if (num % i == 0)
        {       //flag初始化为0
            flag = 0;
        }
    }
if (flag)
{     //如果flag为非零任何值
    printf("%d是一个素数!\n", num);
}                         //**!注：printf输出与scanf不一样，且%d输出需要int
else                     //**!这里的num需要使用[num]不是[&num]，&num为int *类型
{            //如果flag为零
    printf("%d不是一个素数!\n", num);
}                      //**!注：printf输出与scanf不一样，且%d输出需要int
                      //**!这里的num需要使用[num]不是[&num]，&num为int *类型
    return 0;
}
