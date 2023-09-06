#include <iostream>

int main() {
  int edad;
  float resultados[4];
  float mayor;
  float menor;

  std::cout << "Ingrese su edad: ";
  std::cin >> edad;

  resultados[0] = 220 - edad;
  resultados[1] = 208 - 0.7 * edad;
  resultados[2] = 207 - 0.7 * edad;
  resultados[3] = 211 - 0.64 * edad;

  mayor = resultados[0];
  menor = resultados[0];
  for(int x = 1; x < 4; x++){
    if(resultados[x] > mayor){
      mayor = resultados[x];
    }
    if(resultados[x] < menor){
      menor = resultados[x];
    }
    
  }
  std::cout << "Resultado de formula 1: " << resultados[0] << "\n";
  std::cout << "Resultado de formula 2: " << resultados[1] << "\n";
  std::cout << "Resultado de formula 3: " << resultados[2] << "\n";
  std::cout << "Resultado de formula 4: " << resultados[3] << "\nDonde:\n";
  std::cout << "El mayor es: " << mayor << "\n";
  std::cout << "El menor es: " << menor;


  
  
  

  

  
}