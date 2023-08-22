#include<stdio.h>
#include<math.h>

int main()
{
    int i, j, k;

    i = 1 + 2;
    j = 1 + 2 * 3;

    //**?pow函数在math这个库里，所以要#include<math.h>
    k = i + j + -1 + pow(2, 3);//3 + 7 + (-1) + 8

    printf("i = %d\n", i);
    printf("j = %d\n", j);
    printf("k = %d\n", k);

    return 0;

}
