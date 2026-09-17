// Упражнение 1.11 Напишите программу, которая запрашивает у пользователя два целых числа, а затем отображает
// каждое число в диапазоне, определенном этими двумя числами

#include <iostream>

int main() {
    
    int val1{};
    int val2{};

    std::cin >> val1 >> val2;
    int min_val = (val1 <= val2) ? val1 : val2;
    std::cout << "Min: " << min_val << '\n';
    
    if (val1 > val2)
    {
      std::cout << "Wrong input numbers!" << '\n';
      return EXIT_FAILURE;
    }
    while (val1 <= val2)
    {
        std::cout << val1++ << " ";
    }

    return EXIT_SUCCESS;
}