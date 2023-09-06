#include <iostream>

int main() {

  int repes;
  
  std::cout << "Ingrese cantidad de repeticiones: ";
  std::cin >> repes;
  
  std::cout << "Longitud(Cm) \t\t";
  std::cout << "Área de la superficie(Cm^2) \t\t";
  std::cout << "Volumen(Cm^3)\n";
  
  

  for(int x = 0; x <= repes; x++){
    std::cout << x << "\t\t\t\t\t"<< (x*x)*6 << "\t\t\t\t\t\t\t\t\t" <<  x*x*x << "\n";
    
  }
}