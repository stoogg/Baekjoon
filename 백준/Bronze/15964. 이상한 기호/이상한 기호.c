#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
int AA (int a, int b)
{
    return a + b;
}

int BB(int a, int b)
{
    return a- b;
}

int main() // A＠B = (A+B)×(A-B)
{
    int A, B;
    scanf("%d%d", &A, &B);
   
    
    printf("%d", AA(A, B) *BB(A, B));
}
