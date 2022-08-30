/*
Calcular el factorial de un número entero N. Donde se define el factorial de la siguiente forma:
 N! = 1x2x3x.....xN; el factorial de cero es uno  0! =1).  N!, se lee factorial (!) de N.
 Autor: Jorge Urioste Hurtado
*/

#include <iostream>
using namespace std;

int main()
{int F,i,N;  
    cout<<"Digite el valor del numero: "; cin>>N;
   
   if(N==0)
   {
   	F=1;
   }
   else
   {
   
     F=1;
     for(i=1;i<=N;i++)
     {
   	 F=F*i;
     }
   }
   cout<<"El factorial del numero es: "<<F;
   
	return 0;
}
