#include <iostream>

int main()
{
	int a[10] = { 0 };
	bool count[42] = { false }; 

	int c = 0;

	for (int i = 0; i < 10; i++)
	{
		std::cin >> a[i];
		count[a[i] % 42] = true;
	}

	for (int i = 0; i < 42; i++)
	{
		if (count[i] == true) c++;
	}


	std::cout << c;
	

	return 0;
}