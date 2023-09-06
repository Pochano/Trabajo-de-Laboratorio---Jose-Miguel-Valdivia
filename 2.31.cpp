#include <iostream>

int main() {
  float kilometros_recorridos;
  float hora_parquimetro;
  float peajes_transitados;
  float precio_de_galon;
  float media_galon_por_kilometro;
  float precio_de_parking;
  float precio_de_peaje;
  float gasto_total;

std::cout << "El car-pooling mejora el tránsito vehicular y al mismo tiempo al medio ambiente, pero además de ello puede ahorrarte un poco de dinero, pues la personas que esten en el auto pueden dividirse los gastos totales\n";


std::cout << "Ingrese el número de kilómetros recorridos en un día: ";
std::cin >> kilometros_recorridos;
std::cout << "Ingrese el precio por galón: ";
std::cin >> precio_de_galon;
std::cout << "Ingrese la media de kilometros por galón: ";
std::cin >> media_galon_por_kilometro;
std::cout << "Ingrese la cantidad de horas que se encontró estacionado frente a un parquímetro: ";
std::cin >> hora_parquimetro;
std::cout << "Ahora ingrese el costo del parquímetro por hora: ";
std::cin >> precio_de_parking;
std::cout << "Ingrese la cantidad de peajes por los que pasó: ";
std::cin >> peajes_transitados;
std::cout << "Ingrese el costo del peaje: ";
std::cin >> precio_de_peaje;
  
float gasto_galon = ((kilometros_recorridos/media_galon_por_kilometro)*precio_de_galon);
float gasto_parquimetro = (hora_parquimetro*precio_de_parking);
float gasto_peajes = (peajes_transitados*precio_de_peaje);

gasto_total =  gasto_galon + gasto_parquimetro+gasto_peajes;

std::cout << "\nEl gasto total fue de: " << gasto_total;
  
}