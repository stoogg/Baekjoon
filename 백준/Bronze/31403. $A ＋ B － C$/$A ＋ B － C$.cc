#include <iostream>

int main() {
  
    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << a + b - c << '\n';

    if (b < 10)
        std::cout << a * 10 + b - c << '\n';
    else if (b < 100)
        std::cout << a * 100 + b - c << '\n';
    else if (b < 1000)
        std::cout << a * 1000 + b - c << '\n';
    else
        std::cout << a * 10000 + b - c << '\n';
 
    return 0;
}
