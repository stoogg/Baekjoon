#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);

    if (a >= 1 && a <= 4000) 
    {
        if (((a % 4 == 0) && (a % 100 != 0)) || a % 400 == 0)
            printf("1");
        else
            printf("0");
    }
}