#include <iostream>
#include <string>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    std::string result = std::to_string(a * b * c); 

    int s[10] = { 0 };

    for (int i = 0; i < result.size(); i++)
    {
        if (result[i] >= '0' && result[i] <= '9')
        {
            s[result[i] - '0']++;
        }
    }

    for (int j = 0; j < 10; j++)
    {
        std::cout << s[j] << std::endl;
    }

    return 0;
}

