#include<stdio.h>

//*声明常量*//
#define URL "https://www.huipu.cn"
#define NAME "被老师逼着做作业的工作室"
#define BOSS "惠普huplin"
#define Y 2020
#define M 6
#define D 13

//*GO*//
int main()    //*函数头子*//
{
    printf("%s是%s创建的......\n", NAME,BOSS);
    printf("它于%d年%d月%d日被成立\n",Y,M,D);    //*函数身子*//
    printf("这个工作室的域名是%s\n", URL);

    return 0;  //*函数尾巴*//
}
