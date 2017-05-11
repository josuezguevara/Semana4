#include <vector>
#include <iostream>

using namespace std;


int main(){
 //ejemplo de inicializacion
 vector<int> vectorEnteros(10);

 vectorEnteros[0]=16;

 cout<<"Valor de primera casilla: "<<vectorEnteros[0]<<endl;
 cout<<"El tamaño del vector es: "<<vectorEnteros.size()<<endl
 <<"La capacidad del vector es: "<<vectorEnteros.capacity()<<endl
 <<"La capacidad maxima es: "<<vectorEnteros.max_size()<<endl;
 //ejemplo push_back

 vector<int> vectorEnteros2;

 vectorEnteros2.push_back(15);

 cout<<"Valor de la primera casilla vect2: "<<vectorEnteros2[0]<<endl
 <<"Vector2: "<<endl;
 cout<< "El tamaño es: "<<vectorEnteros2.size()<<endl
 << "La capacidad es: "<<vectorEnteros2.capacity()<<endl
 << "Capacidad MAX :"<<vectorEnteros2.max_size()<<endl;
 
 return 0;
}//fin main
