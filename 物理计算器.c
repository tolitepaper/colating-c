#include<stdio.h>

#define g 10
int main()
{
    float F;
    float G;
    float Fl;
    float Fup;
    float Fdw;
    float Gp;
    float Mp;
    float Vp;
    float rou;
    printf("<物理计算器>\n");
    printf("请输入物体重量:");
    scanf("%f", &G);
    if (G > 0)
    {
        printf("请输入拉力:");
        scanf("%f", &Fl);
        F = G - Fl;
        printf("F = G - F拉\nF=%f\n", F);
    }
    else
    {
        printf("请输入向上力:");
        scanf("%f", &Fup);
        if(Fup > 0)
        {
            printf("请输入向下力:");
            scanf("%f", &Fdw);
            F = Fup - Fdw;
            printf("F = Fup - Fdw\nF = %f\n", F);
        }
        else
        {
            printf("请输入排除液体质量:");
            scanf("%f", &Mp);
            if(Mp > 0)
            {
                F = Mp * g;
                printf("F = Mp * g\nF=%f\n", F);
            }
            else
            {
                printf("请输入液体密度:");
                scanf("%f", &rou);
                printf("请输入物体体积:");
                scanf("%f", &Vp);
                F = rou * Vp * g;
                printf("F = rou * Vp * g\nF=%f\n", F);
            }
        }
    }
    return 0;
}
