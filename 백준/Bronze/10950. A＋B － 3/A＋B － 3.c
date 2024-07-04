#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//0 < A, B < 10 두수 합

	//몇개를 입력받을꺼냐
	//n개만큼 더하기
	int a, b, n;
	scanf("%d", &n);


	for (int i = 0; i < n; i++)
	{

		scanf("%d%d", &a, &b);
		if (a > 0 && b < 10)
		{
			printf("%d\n", a + b);
		}
		else
		{
			printf("다시");
			break;
		}
	}

	return 0;

}