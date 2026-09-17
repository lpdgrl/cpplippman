#include "../../include/Sales_item.h"
#include <iostream>


int main()
{
  Sales_item item1;
  Sales_item item2;

  std::cin >> item1;
  while(std::cin >> item2)
  {
    if (item1.isbn() == item2.isbn())
    {
      item1 += item2;
      continue;
    }
    std::cout << item1 << std::endl;
    item1 = item2;
  }
  std::cout << item1 << std::endl;

  return EXIT_SUCCESS;
}
