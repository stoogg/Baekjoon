#include <iostream>

int main()
{
	int a, b;
	std::cin >> a >> b;

	if ((a <= 10000 && b <= 10000))
		if (a > b)
			std::cout << '>';
		else if (a < b)
			std::cout << '<';
		else
			std::cout << "==";
	else
		std::cout << "RE";
	
	return 0;
}

