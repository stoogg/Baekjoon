#include <iostream>

int main()
{
    int cheak[31] = { 0 };

    for (int i = 0; i < 28; i++)
    {
        int n;
        std::cin >> n;
        cheak[n] = 1;
    }

    for (int i = 1; i <= 30; i++)
    {
        if (cheak[i] == 0)  
            std::cout << i << '\n';
    }

    return 0;
}
