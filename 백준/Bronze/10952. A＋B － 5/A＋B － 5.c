#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;

	while (1)
	{
		scanf("%d%d", &a, &b);
		if (a > 0 && b < 10)
		{
			printf("%d\n", a + b);
		}
		else
		{
			break;
		}
	}

	return 0;

}