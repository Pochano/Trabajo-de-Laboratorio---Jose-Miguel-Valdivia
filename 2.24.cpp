  #include <iostream>
  
  int main() {
  
    int num_1;
    int num_2;
    
    std::cout << "Ingrese un número (De preferencia entero): ";
    std::cin >> num_1;
    std::cout << "Ingrese otro número (De preferencia entero): ";
    std::cin >> num_2;
  
    int suma = num_1 + num_2;
  
    std::cout << "La suma de los números es: " << suma << "\n";
    
    if(suma % 2 == 0){
      std::cout << "La suma es par \n";
    }
    else{
      std::cout << "La suma es impar \n";
    }
    
  }