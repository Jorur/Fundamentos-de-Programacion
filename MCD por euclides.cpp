/*11.	Hacer un programa para calcular el MCD (m�ximo com�n divisor) de dos n�meros enteros, 
usando el algoritmo de Euclides.

*/

#include <iostream>
using namespace std;

int main()
{int N1,N2,r;
 
 cout<<"Digite el numero mayor: "; cin>>N1;
 cout<<"Digite el numero menor: "; cin>>N2;
 
 r=0;
 while(N2!=0)
 {
 	r=N1%N2;
 	N1=N2;
 	N2=r;
 	
 }
  cout<<"El maximo comun divisor es: "<<N1;
	
}


