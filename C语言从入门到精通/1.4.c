#include<stdio.h>
#define Height 10//!请输入高度
int calculate(int Long, int Width);
int main()
{
    int m_Long;
    int m_Width;
    int result;

    printf("Height is:%d\n",Height);

    printf("Longpease\n");
    scanf("%d",&m_Long);

    printf("widthpease\n");
    scanf("%d",&m_Width);

    result=calculate(m_Long,m_Width);
    printf("Cuboid iolumeis: ");
    printf("%d\n",result);
    return 0;
}

int calculate(int Long,int Width)
{
    int result = Long * Width * Height;
    return result;
}
