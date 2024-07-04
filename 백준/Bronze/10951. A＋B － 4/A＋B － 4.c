#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;

	while(scanf("%d%d", &a, &b)!= -1)
	{
		if(a>0 && b <10)
		printf("%d\n", a + b);
	}

	return 0;

}