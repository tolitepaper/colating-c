#include<stdio.h>

int main()
{    //**声明count变量
    int count; 
    //**!初始化count为0，退出条件为count<10时，更新计数器为count++;
    for (count = 0; count < 10; count++)
    {
        printf("hello\n");
    }

    return 0;
}
