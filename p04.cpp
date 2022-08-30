/* 
Autor: Jorge Urioste
Objetivo: Calcular el area sombreada del circulo inscrito en el cuadrado
Fecha:17/8/2021
    A=B*h
*/

#include <iostream>
using namespace std;

int main()
{ float lado, AC, pi, L, Ac, AF;
pi=3.1416;
cout<<"Calculo del area sombreada"<<endl;
cout<< "Digite el valor del lado: "<<endl;
cin>>L;
AF= L*L*(1-pi/4);
cout<< "El area sombreada es: "<<AF<<endl;
return 0;	
	
}

