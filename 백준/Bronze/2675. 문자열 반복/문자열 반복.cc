#include <iostream>
#include <string>
int main() {
  
    int T;
    std::cin >> T;

 
    do
    {

        int R;

        std::string S;
        std::cin >> R;
        std::cin >> S;


        for (int i = 0; i < S.size(); i++)
        {
            for (int j = 0; j < R; j++)
            {
                std::cout << S[i];
            }
        }
        std::cout << '\n';


        T--;

    } while (T != 0);
    return 0;
}
