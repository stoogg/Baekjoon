#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>


int main() // A＠B = (A+B)×(A-B)
{
    long long n[100];
    long r = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%ld", &n[i]);
        r += (n[i] *n[i]);
    }
    printf("%ld", r % 10);

    

}
