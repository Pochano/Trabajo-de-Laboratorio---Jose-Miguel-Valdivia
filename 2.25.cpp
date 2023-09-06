#include <iostream>

int main() {

  int num_1;
  int num_2;
  int num_3;
  
  std::cout << "Ingrese su primer número: ";
  std::cin >> num_1;
  std::cout << "Ingrese su segundo número: ";
  std::cin >> num_2; 
  std::cout << "Ingrese su tercer número: ";
  std::cin >> num_3;

  
  if(num_3 % num_1 == 0 && num_3 % num_2 == 0){
    std::cout << "El primer y segundo número son factores comunes del tercero \n";
  } 

// Desde la linea 23 a la 28 sirve para saber cual de los dos números si es factor comun del tercer número (quitar comentarios para funcionar)
/*
  else if(num_3 % num_1 == 0){
    std::cout << "Solo el primer número es factor común del tercero \n";
  }
  else if(num_3 % num_2 == 0){
    std::cout << "Solo el segundo número es factor común del tercero \n";
  }
  */
    
  else{std::cout << "El primer o el segundo número no son factores comunes del tercero \n";
  }
  
}