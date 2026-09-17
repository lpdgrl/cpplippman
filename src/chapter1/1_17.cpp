// Что прозойдет, если в рассматриваемой здесь программе все введенные значения будут равны?
// Что если никаких совпадающих значений нет?

// Answer:
// Программа будет накапливать количество совпадающих значений.
// Если совпадающих значений нет, то каждый раз после ввода нового, программа будет слать
// сообщение о количестве встреченных совпадающих значений предыдущего значения.

#include <iostream>


int main() 
{
  int curr_val{};
  int value{};

  if (std::cin >> curr_val)
  {
    int cnt{1};
    while (std::cin >> value)
    {
      if (curr_val == value)
      {
        ++cnt;
        continue;
      }
      std::cout << curr_val << " occurs " << cnt << " times" << std::endl;
      curr_val = value;
      cnt = 1;
    }
    std::cout << curr_val << " occurs " << cnt << " times" << std::endl; 
  }

  return EXIT_SUCCESS;
}