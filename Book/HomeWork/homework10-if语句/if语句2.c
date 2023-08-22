#include<stdio.h>

int main()
{       //**?定义i
    int i;
             //**!输出文本并使用scanf接收
    printf("小逼崽子几岁啊：");
    scanf("%d", &i);
    if (i > 18)
    {
        printf("进门左拐!\n");
        }
    else
    {
        printf("小屁孩赶紧爬远点!\n");
        }

return 0;
}
