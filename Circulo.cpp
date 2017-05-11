#include "Circulo.h"
#include <cmath>

Circulo::Circulo(){
 radio=5;
}

Circulo::Circulo(double r){
 radio=r;
}

void Circulo::setRadio(double r){
 radio=r;
}

double Circulo::getRadio(){
 return radio;
}

double Circulo::area(){
 return radio * radio * PI;
}

double Circulo::perimetro(){
 return 2*PI*radio;
}

