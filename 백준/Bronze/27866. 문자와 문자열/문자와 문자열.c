#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>

int main() 
{
    char S[1000];
    scanf("%s", S);

    int i;
    scanf("%d", &i);
    printf("%c", (S[i-1]));
    
}
