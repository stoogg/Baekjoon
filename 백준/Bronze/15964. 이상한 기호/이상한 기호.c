#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>


int main() // A＠B = (A+B)×(A-B)
{
    long long A, B;
    scanf("%ld%ld", &A, &B);
    printf("%ld", (A+B)*(A-B));
}
