#include<stdio.h>

int main()
{
    int i;

    for (i = 0; i < 100; i++)
    {
        if(i % 2)
        {
            continue;
        }
    }
    return 0;
}
