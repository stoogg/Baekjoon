#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>

int main(void)

{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);

	if (a == b && b==c&& c==a)printf("%d", 10000 + a * 1000);
	else if (a == b)printf("%d", 1000 + a * 100);
	else if (c == b)printf("%d", 1000 + b * 100);
	else if (a == c)printf("%d", 1000 + a * 100);

	else printf("%d", (a > b ? (a > c ? a : c) : (b > c ? b : c)) * 100);

}
