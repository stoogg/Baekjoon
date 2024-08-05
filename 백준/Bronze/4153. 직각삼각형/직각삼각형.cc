#include <iostream>
#include <algorithm> 

int main() 
{
    int heru, ausar, auset;

    while (true) 
    {
        std::cin >> ausar >> auset >> heru;

        if (heru == 0 && ausar == 0 && auset == 0) 
            break;
        
        int a = std::min({ ausar, auset, heru });
        int c = std::max({ ausar, auset, heru });
        int b;

        if (a != ausar && c != ausar) 
            b = ausar;
        else if (a != auset && c != auset) 
            b = auset;
        else 
            b = heru;
        
        if (c * c == a * a + b * b) 
            std::cout << "right\n";
        else 
            std::cout << "wrong\n";
    }

    return 0;
}
