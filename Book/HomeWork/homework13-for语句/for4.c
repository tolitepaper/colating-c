#include<stdio.h>

int main()
{
    //这里应该为int i, j;
    //**但可以直接在for里写int i=*,j=*
    for (int i = 0, j = 10; i < j; i++, j--)
    {
        printf("%d\n", i);
    }

    printf("%d%d\n", i, j);
            //**!我们在for里定义的变量出了for循环就不能用了，所以这里会报错

    return 0;
}
