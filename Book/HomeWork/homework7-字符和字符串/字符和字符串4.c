#include<stdio.h>

int main()
{                          //*某些编译器需要输入\0来结束
         //**?[]里面要写输出的数量，也可以不写
    char a[6] = {'F', 'i', 's', 'h', 'C', '\0'};
    //也可以直接在大括号里面写字符串常量
    //如char a[] = {"FishC"};   不用加\0
    //甚至可以把大括号直接省了 XD
    //char a[] = "FishC";

    printf("%s!\n", a);
    printf("Hello\n");

    return 0;
}
