#include <iostream>

int main() {
  int num;
  int divisor = 10;
  
  
  std::cout << "Ingrese un número de 4 dígitos: ";
  std::cin >> num;
  for(int x = 0; x <= 3; x++){
    std::cout << num % divisor << "  ";
    num = num / 10;

    
  }
}