#include <iostream>

int main()
{
	int a,b,c;

	while (std::cin >> a >> b >> c)
	{
		if (a == 0 && b == 0 && c == 0) break;

		std::cout <<	(a * a + b * b == c * c || 
						a * a + c * c == b * b || 
						b * b + c * c == a * a ? 
						"right\n" : "wrong\n");
	}

	return 0;
}