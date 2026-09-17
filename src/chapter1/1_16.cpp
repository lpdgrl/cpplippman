#include <iostream>

int main() {
    
    int sum = 0;
    int value = 0;
    
    // while (std::cin >> value)
    // {
    //     sum += value;
    // }
    for (; std::cin >> value;)
    {
      sum += value;
    }
    std::cout << sum << '\n';

    return 0;
}