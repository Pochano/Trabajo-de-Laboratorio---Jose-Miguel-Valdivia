#include <iostream>

int main() {
  int seleccion;
  float peso;
  float altura;
  float resultado;

  std::cout << "Desea medir su masa corporal en Libras y Pulgadas (Ingrese 1), o en Metros y Centímetros? (Ingrese 2)";
  std::cin >> seleccion;

  std::cout << "Ingrese su peso: ";
  std::cin >> peso;
  std::cout << "Ingrese su altura: ";
  std::cin >> altura;

  resultado = (peso)/(altura*altura);
  
  if(seleccion == 1){
    resultado = resultado*703;
  }
      
  std::cout << "Su IMC es: " << resultado << "\n";

  if(resultado <= 18.5){
    std::cout << " Bajo de Peso ";}
  if(resultado > 18.5 && resultado <= 24.9){
    std::cout << " Índice Normal ";}
  if(resultado > 24.9 && resultado <= 29.9){
    std::cout << " Sobrepeso"; }
  if(resultado >= 30){
    std::cout << "Obesidad";}
  
  
}