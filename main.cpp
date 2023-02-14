/*
10/02/2023
autor: edwin sebastian pardo salamanca

se tiene un vector de tipo flotante cuyo tamaño el 3.
se quiere imprimir el direcion de ese arreglo. adicionalse quiere presentar la direccecion de memoria usando los punteros.

*/

#include <iostream>
using namespace std;

//funcion principal
int main() {
  int n;
  float numero[100]; //declaro el vector 
  

  cout << "cuantos datos va a digitar: "; //preguntos los digitos para saber el tamaño del arreglo
  cin >> n;
  cout << endl;

  // llenamos el vector
  for (int i = 0; i < n; i++) {
    cout << "digite dato: ";
    cin >> numero[i];
    cout << endl;
  }
float *puntero; //se crea el puntero y es tipo float debido a que vamos a usar datos tipo float, como esta declaro arriba
  
  //imprimismo la variable, puntero y direccion
  for (int i = 0; i < n; i++) {
    puntero = &numero[i];
    cout << "variable ["<<i+1<<"]: "<< numero[i] << endl;
    cout << "puntero ["<<i+1<<"]: "<< puntero << endl;
    cout << "direccion ["<<i+1<<"]: " << *puntero << endl;
    cout << endl;
  }
}