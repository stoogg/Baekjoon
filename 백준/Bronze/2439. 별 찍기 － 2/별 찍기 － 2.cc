#include <iostream>
#include <cstdlib>
#include <stdlib.h>

int main()
{
	int n;
	std::cin >> n;

	int i = 1, j = 1;
	for (int i = 0; i < n; i++)
	{

		for (int j = 1; j < n - i; j++)
		{
			std::cout << " ";
		}
		for (int j = 0; j <= i; j++)
		{
			std::cout << "*";
		}

		std::cout << '\n';
	}

	return 0;
}

