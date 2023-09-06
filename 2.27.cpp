#include <iostream>

int main()
{
  char mi_char;
  std::cout << "Ingrese un caracter: ";
  std::cin >> mi_char;

  std::cout << static_cast<int>(mi_char);

}
