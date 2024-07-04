#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, N, v,count=0;

	scanf("%d",&N);
	int a[100];

	for (i = 0; i < N; i++)
	{
		scanf("%d", &a[i]); 
	}

	scanf("%d", &v);

	for (i = 0; i < N; i++)
	{
		if (a[i] == v)
			count++;
	}
	printf("%d\n", count);
	

	return 0;

}