#include<stdio.h>

int main()

{
    float x,y;

        printf("输入电量");
scanf("%f",&x);

if(x<=150)y=0.52*x;

    else if(x<=280||x>150)y=0.52*150+0.57*(x-150);
    else y=0.52*150+0.57*(x-150)+0.82*(x-280);

    printf("用户该支付的费用为%.2f",y);

    return 0;

}