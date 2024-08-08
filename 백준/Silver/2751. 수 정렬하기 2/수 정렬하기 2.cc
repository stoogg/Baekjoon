#include <iostream>
#include <algorithm>
int main()
{
	int n;
	std::cin >> n;

	int* numary = new int[n];

	for (int i = 0; i < n; i++)
	{
		std::cin >> numary[i];
	}

	/*for (int i = 0; i < n - 1; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (numary[i] > numary[j])
			{
				int temp = numary[i];
				numary[i] = numary[j];
				numary[j] = temp;
			}

		}

	}*/

	std::sort(numary, numary + n);

	for (int i = 0; i < n; i++)
	{
		std::cout << numary[i] << '\n';
	}

	delete[] numary;

	return 0;
}