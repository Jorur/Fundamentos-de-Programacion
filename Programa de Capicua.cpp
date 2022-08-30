/* Capicua
8.	Determinar si un número es un palíndromo.  
Es decir, si la lectura de izquierda a derecha tiene el mismo valor.  
Ej. 34543, es un palíndromo . */

#include <iostream>
using namespace std;

int main()
{int N,d,Z,M;
   cout<<"Digite el numero: "; cin>>N;
   Z=N;
   M=0;
   
   while (N>0)
     {
   	  d=N%10;
   	  M=M*10+d;
   	  N=N/10;
     }
	if (M==Z)
	{
		cout<<"El numero es capicua...";
	}
    else {
    	cout<<"El numero no es capicua... ";
	}
	
}
