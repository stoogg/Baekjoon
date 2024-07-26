#include <iostream>
#include <cstdlib>
#include <stdlib.h>

int main()
{
	int ary[9];
	int max = 0;
	int c;

	for (int i = 0; i < 9; i++)
	{
		std::cin >> ary[i];
		if (ary[i] > max)
		{
			max = ary[i];
			c = i + 1;
		}
	}


	std::cout << max << '\n' << c << '\n';

	return 0;
}

