#include "Figura.h"
#include "Rectangulo.h"
#include "Circulo.h"
#include "Cuadrado.h"

#include <iostream>

using namespace std;
int main(){
 //herencia
 Figura figura;
 Rectangulo rectangulo(10,20);
 Circulo c(10);
 Cuadrado square(10);
 cout<<"Area Figura: "<<figura.area()<<endl<<
 "Area Rectangulo: "<<rectangulo.area()<<endl;
 cout<<"Area Circulo: "<<c.area()<<endl<<"Area Cuadrado: "<<square.area()<<endl;
 
 //
 Figura* figura1=new Figura();
 Figura* figura2=new Rectangulo(30,30);
 Figura* figura3=new Cuadrado(40);
 Figura* figura4=new Circulo(100);

 cout<<"----------------------------------"<<endl;

 cout<<"Area de Rectangulo: "<<figura2->area()<<endl;
 
 //liberar memoria
 delete figura1;
 delete figura2;
 delete figura3;
 delete figura4;
 
 
 
 return 0;
}//fin main
