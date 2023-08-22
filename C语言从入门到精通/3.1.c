#include<stdio.h>

int main()  //主函数main
{
    int result = 0; //定义变量

    int i;

    printf("从1加到100的计算结果：\n");   //输出语句

    for (i = 1; i < 100; i++)
    {
        result = i + result;    //输出结果
        printf("%d\n", result); //结果返回
    }

    return 0;
}

