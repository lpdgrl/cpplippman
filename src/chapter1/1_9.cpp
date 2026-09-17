#include <iostream>

int main()
{
  int begin = 50;
  int end = 100;

  while (begin <= end)
  {
    std::cout << begin++ << " ";
  }

  return 0;
}