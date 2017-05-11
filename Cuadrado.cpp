#include "Cuadrado.h"
#include <cmath>

Cuadrado::Cuadrado(){
 this->setLado(10);
 this->setAltura(10);
}

Cuadrado::Cuadrado(double lado):Rectangulo(lado,lado){
 //se invoca el constructor de REctangulo
 //this->lado=lado;
}

void Cuadrado::setLado(double lado){
 this->setLado(lado);
 this->setAltura(lado);
}

/*double Cuadrado::getLado(){
 return lado;
}

double Cuadrado::area(){
 return 2*lado;
}

double Cuadrado::perimetro(){
 return 4*lado;
}*/
