#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
// ㅣn-mㅣ
{
    long n, m,r;
    scanf("%ld%ld", &n, &m);

    r = n - m; // -2 -5 = -7


    if (r < 0)
    {
        r = r * (-1);
        printf("%ld", r);
    }
    else
    {
        printf("%ld", r);
    }

    return 0;

}