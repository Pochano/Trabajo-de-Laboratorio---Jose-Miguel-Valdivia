#include <iostream>

int main() {

  int numeros[5];
  int num_mayor = numeros[0];
  

  for(int i=0; i<=4; i++){
    std::cout << "Ingrese un número: ";
    std::cin >> numeros[i];
  }

 for(int j=0; j<=4; j++){
    if(num_mayor > numeros[j]){
      continue;
    }
    else{num_mayor = numeros[j];}
  }
  int num_menor = numeros[0];
  
  for(int k=1; k<=4; k++){
    if(num_menor > numeros[k]){
      num_menor = numeros[k];
    } 
    else{
      continue;
    }
  }
   
std::cout << "El número mayor es: " << num_mayor << "\n";
std::cout << "El número menor es: " << num_menor;

}