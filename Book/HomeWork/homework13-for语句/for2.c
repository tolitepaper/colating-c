#include<stdio.h>

int main()
{    //**提前声明count = 0就可以把for里的删掉了
    int count = 0;
           //**?注意空格
    for ( ; count < 10;)
    {                 //甚至count++也可以省了
        printf("hello\n");
        count++;
    }//**!当然这样做不如直接写while

    return 0;
}
