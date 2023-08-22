#include<stdio.h>
#include "stdbool.h"
int main()
{       //**!请注意！在windows编译器上long long int长整数类型输出需要使用[%I64d]
       //**!lunix上需要使用[%lld]
    long long i, num;
    _Bool flag = 1;

    printf("请输入一个整数: ");
    scanf("%I64d", &num);
          //i初始化为2
    for (i = 2; i < num / 2; i++)
    {       //当number余i等于0，不是素数
        if (num % i == 0)
        {       //flag初始化为0
            flag = 0;
            break;
        }
    }
if (flag)
{     //如果flag为非零任何值
    printf("%I64d是一个素数!\n", num);
}
else
{            //如果flag为零
    printf("%I64d不是一个素数!\n", num);
}

printf("i = %I64d", i);//**!若上面不写break则为错误答案

return 0;
}
