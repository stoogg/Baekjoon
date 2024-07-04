#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, x;

	scanf("%d%d", &n, &x);
	int A[10001];

	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &A[i]);

		if (i == n)
			break;
		if (A[i] < x)
			printf("%d ", A[i]);
	}
	return 0;
}
