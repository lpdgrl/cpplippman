#include "SalesItem.hpp"

// Упр. 1.21 Напишите программу, которая читает два объекта класса 
// Sales_item с одинаковыми ISBN и вычисляет их сумму
void Exercise121()
{
  SalesItem item1;
  SalesItem item2;

  std::cin >> item1 >> item2;

  if (item1 == item2)
  {
    std::cout << item1 + item2 << '\n';
  }
}

// Упр. 1.22 Напишите программу, читающую несколько транзакций с одинаковым ISBN
// и отображающую сумму всех прочитанных транзакций
void Exercise122()
{
  SalesItem item1;
  SalesItem item2; 
  std::cin >> item1; 
  while (std::cin >> item2)
  {
    if (item1 == item2)
    {
      item1 += item2;
      continue;
    }
    std::cout << item1;
    item1 = item2;
  }
  std::cout << item1;
}


int main() 
{
  // SalesItem sales_item1, sales_item2;

  // std::cin >> sales_item1 >> sales_item2;
  // std::cout << '\n';
  // std::cout << sales_item1;
  // std::cout << sales_item2;
  // std::cout << '\n';
  // std::cout << sales_item1 + sales_item2 << '\n';
  // std::cout << '\n';

  // SalesItem item3;
  // std::cin >> item3;
  // item3 += sales_item1 + sales_item2;
  // std::cout << '\n';
  // std::cout << item3 << '\n';
  Exercise122();

  return EXIT_SUCCESS;
}