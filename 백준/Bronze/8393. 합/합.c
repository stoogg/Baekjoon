#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	int n,r = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		r += i;
	}
	printf("%d", r);
}