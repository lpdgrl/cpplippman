#include "../../include/Sales_item.h"
#include <iostream>

int main()
{
  Sales_item total;
  
  if (!(std::cin >> total))
  {
    std::cerr << "No data?!" << std::endl;
    return EXIT_FAILURE;
  }

  Sales_item trans;
  while (std::cin >> trans)
  {
    if (total.isbn() != trans.isbn())
    {
      std::cout << total << std::endl;
      total = trans;
      continue;
    }
    total += trans;
  }
  std::cout << total << std::endl;

  return EXIT_SUCCESS;
}
