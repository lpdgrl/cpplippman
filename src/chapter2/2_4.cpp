// Упражнение 2.4
// Напишите программу для проверки правильности ответов упражнения 2.3. При неправильных ответах изучите этот 
// раздел ещё раз.

#include <iostream>

int main(int argc, [[maybe_unused]] char** argv)
{
  unsigned u = 10, u2 = 42;
  std::cout << u2 - u << std::endl;
  std::cout << u - u2 << std::endl; 

  int i = 10, i2 = 42;
  std::cout << i2 - i << std::endl; 
  std::cout << i - i2 << std::endl;
  std::cout << i - u << std::endl;  
  std::cout << u - i << std::endl;

  return EXIT_SUCCESS;
}
