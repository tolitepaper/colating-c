#include<stdio.h>

int main()
{
    int a = 5, b = 3;

    int BA = 3, AB = 3;//**!短 路 求 值 变量声明

    //第10课前一次作业
    printf("%d\n", 1 < 2);
    printf("%d\n", a > b);
    printf("%d\n", a <= b + 1);
    printf("%d\n", 'a' + 'b' <= 'c');
    printf("%d\n", (a = 3) > (b));


    printf("-----前后作业分割线-----\n");


    //后一次作业
    printf("%d\n", 3 > 1 && 1 < 2);
    printf("%d\n", 3 + 1 || 2 == 0);
    printf("%d\n", !(a + b));
    printf("%d\n", !0 + 1 < 1 || !(3 + 4));
    printf("%d\n", 'a' - 'b' && 'c');


    printf("----- 短 路 求 值 作业分割线-----\n");


    //短 路 求 值作业
    (BA = 0) && (AB = 5);
    printf("BA = %d , AB = %d\n", BA, AB);

    (BA = 1) || (AB = 5);
    printf("BA = %d , AB = %d\n", BA, AB);

    return 0;
}
//详情见课堂笔记第10课