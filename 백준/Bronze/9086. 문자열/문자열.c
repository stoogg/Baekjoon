#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>

int main() 
{
    int j,i,T;
    char S[1000];
    scanf("%d", &T);

    for(i=0; i<T; i++)
    { 
        scanf("%s", S);
        for (j=0; j < strlen(S); j++)
        {
            if (j == 0)printf("%c", S[j]);
            if (j == strlen(S) - 1)printf("%c\n", S[j]);
        }

    }
    

    
}
