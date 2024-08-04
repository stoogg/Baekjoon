#include <iostream>
#include <string>
int main()
{
	int melo[8] = { 0 };
	bool ascending = false;
	bool descending = false;

	for (int i = 0; i < 8; i++)
	{
		std::cin >> melo[i];
	}

	if (melo[0] == 1)
	{
		for (int i = 1; i < 8; i++)
		{
			if (melo[i] == i + 1)
			{
				ascending = true;
			}
			else
			{
				ascending = false;
				break;
			}

		}
	}

	if (melo[0] == 8)
	{
		for (int i = 1; i < 8; i++)
		{
			if (melo[i] == 8 - i)
			{
				descending = true;
				
			}
			else
			{
				descending = false;
				break;
			}
		}
	}


	if (ascending)
		std::cout << "ascending\n";
	else if (descending)
		std::cout << "descending\n";
	else
		std::cout << "mixed\n";


	return 0;
}

