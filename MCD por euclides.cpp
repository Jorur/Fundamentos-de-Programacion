/*11.	Hacer un programa para calcular el MCD (máximo común divisor) de dos números enteros, 
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


