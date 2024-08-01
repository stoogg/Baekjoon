#include <iostream>
#include <string>

int main() 
{
	int n,sum = 0,t = 0;
	std::cin >> n;
	std::string c;

	for (int i = 0; i < n; i++)
	{
		std::cin >> c;
		for (int j = 0; j < c.size(); j++)
		{

			if (c[j] == 'O')
			{
				t++;
				sum += t;
			}
			else t = 0;
		}

		std::cout << sum << '\n';
		sum = 0;
		t = 0;
	}

	return 0;
}

