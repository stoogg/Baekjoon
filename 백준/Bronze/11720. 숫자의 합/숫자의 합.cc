#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;

    std::string c;
    std::cin >> c;

    int sum = 0;

    for (int i = 0; i < n; i++) sum += c[i] - '0';
   
    std::cout << sum;

    return 0;
}
