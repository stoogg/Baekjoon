#include <iostream>
#include <string>

int main() 
{
	int t1,t2;
	int h, w, n1, n2;	//층, 길이, 번쨰
	//int i = 1, j = 1;

	std::cin >> t1;
	t2 = 0;
	while (t1 != t2)
	{
		n2 = 0;

		std::cin >> h >> w >> n1;

		for (int i = 1; i <= w; i++)		
		{
			for (int j = 1; j <= h; j++)	
			{
				n2++;
				if (n2 == n1)
				{
					std::cout << j << (i < 10 ? "0" : "") << i << "\n";
					break;
				}
			}
		}
		t2++;
	}


	return 0;
}
