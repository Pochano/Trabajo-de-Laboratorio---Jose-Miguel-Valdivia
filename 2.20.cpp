#include <iostream>

int main() {
  
  int radio;
	int diametro;
  float circunferencia;
  float area;
  float pi = 3.14159;
  
	
	std::cout << "Ingrese el radio de su circulo: \n";
	
	std::cin >> radio;

  
	diametro = radio * 2;
  circunferencia = 2*(pi) * radio;
  area = pi * (radio*radio);
  
	
	std::cout << "El diametro de su circulo es: " << diametro << "\n";
  std::cout << "La circunferencia de su circulo es: " << circunferencia << "\n";
  std::cout << "El área de su circulo es: " << area << "\n";

  
}