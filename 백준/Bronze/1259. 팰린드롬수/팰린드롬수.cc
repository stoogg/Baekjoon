#include <iostream>
#include <string>
int main()
{
	while (1)
	{
		std::string  n;
		std::cin >> n;
		if (n[0] == '0')break;
		int c = 0;


		for (int i = 0; i < (n.size() / 2); i++)
		{
			if (n[i] == n[n.size() - i-1]) c++;
		}

		if (c == (n.size() / 2)) std::cout << "yes\n";
		else std::cout << "no\n";
	}

	return 0;
}