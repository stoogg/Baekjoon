#include <iostream>
#include <cstdlib>
#include <stdlib.h>

int main()
{
	int n;
	std::cin >> n;

	int* ary = new int[n];
	int max = -1000001,min = 1000001;



	for (int i = 0; i < n; i++)
	{
		std::cin >> ary[i];

		if (ary[i] > max)
			max = ary[i];

		if (ary[i] < min)
			min = ary[i];
	}

	std::cout << min << ' ' << max << '\n';
	delete[] ary;

	return 0;
}

