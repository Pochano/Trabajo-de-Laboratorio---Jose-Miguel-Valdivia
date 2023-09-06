#include <iostream>

int main() {
//Imprime un patron de 5 estrellas y en la siguiente el anterior - 1

  std::cout << "*****\n****\n***\n**\n*\n" << std::endl;

// Otra forma de hacerlo

  int contador;
  int filas;
  
  std::cout << "Ingrese el número de filas: \n";
  std::cin >> filas;
  std::cout << "Ingrese el mismo número: \n";
  std::cin >> contador;
  

  while(filas >= 1) {
    while(contador >= 1){
      std::cout << "*";
      contador = contador - 1;
    }
    std::cout << "\n";
    filas = filas - 1;
    contador = contador + filas;
  }
}