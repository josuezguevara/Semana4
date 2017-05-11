#include <iostream>
#ifndef MICLASE_H
#define MICLASE_H

class MiClase {
 private: 
  int* pointer;
  int size;

 public:
  MiClase();//ctor por defecto
  MiClase(int);//ctor recibde un size

  int get(int);//retorna el valor de una casilla
  void set(int,int);//establace el valor indicado en la casilla indicada

  ~MiClase();
};

#endif
