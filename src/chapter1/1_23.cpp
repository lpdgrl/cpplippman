// Напишите программу, которая читает несколько транзакций и подсчитывает количество транзакций для каждого ISBN
#include "../../include/Sales_item.h"
#include <iostream>


int main()
{
  Sales_item item1;
  Sales_item item2;

  std::cin >> item1;
   int cnt{1};
  while(std::cin >> item2)
  {
   
    if (item1.isbn() == item2.isbn())
    {
      ++cnt;
      continue;
    }
    std::cout << item1.isbn() << " occurs " << cnt << '\n';
    item1 = item2;
    cnt = 1;
  }
  std::cout << item1.isbn() << " occurs " << cnt << '\n';
  

  return EXIT_SUCCESS;
}
