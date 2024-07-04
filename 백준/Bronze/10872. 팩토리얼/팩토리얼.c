#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//첫째 줄에 정수 N(0 ≤ N ≤ 12)이 주어진다.

	int n,count = 1;

	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		count *= i;
	
	}

	printf("%d", count);




	return 0;

}