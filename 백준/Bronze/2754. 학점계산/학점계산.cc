#include <iostream>

int main()
{
    char grade[3];
    std::cin >> grade;

    if (grade[0] == 'A')
    {
        if (grade[1] == '+')
            std::cout << "4.3";
        else if (grade[1] == '0')
            std::cout << "4.0";
        else if (grade[1] == '-')
            std::cout << "3.7";
    }
    else if (grade[0] == 'B')
    {
        if (grade[1] == '+')
            std::cout << "3.3";
        else if (grade[1] == '0')
            std::cout << "3.0";
        else if (grade[1] == '-')
            std::cout << "2.7";
    }
    else if (grade[0] == 'C')
    {
        if (grade[1] == '+')
            std::cout << "2.3";
        else if (grade[1] == '0')
            std::cout << "2.0";
        else if (grade[1] == '-')
            std::cout << "1.7";
    }
    else if (grade[0] == 'D')
    {
        if (grade[1] == '+')
            std::cout << "1.3";
        else if (grade[1] == '0')
            std::cout << "1.0";
        else if (grade[1] == '-')
            std::cout << "0.7";
    }
    else if (grade[0] == 'F')
    {
        std::cout << "0.0";
    }

    return 0;
}
