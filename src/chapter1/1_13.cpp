#include <iostream>

int main()
{
  for (int i = 50; i <= 100; ++i)
  {
    std::cout << i << " ";
  
  }
  std::cout << std::endl;

  for (int i = 10; i >= 0; --i)
  {
    std::cout << i << " ";
  }

  std::cout << std::endl;

  int value1{};
  int value2{};

  std::cin >> value1 >> value2;
  for (int i = value1; i <= value2; ++i)
  {
    std::cout << i << " ";
  }
  std::cout << std::endl;
}