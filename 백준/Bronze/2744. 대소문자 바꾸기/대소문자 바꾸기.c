#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>

int main() 
{
    char n[100];
    scanf("%s", n);

    for (int i = 0; i <= strlen(n); i++)
    {
        if (n[i] >= 65&& n[i]<=90)
            printf("%c", n[i] + 32);
        else if(n[i] >= 97 && n[i] <= 122)
            printf("%c", n[i] - 32);
    }
}
