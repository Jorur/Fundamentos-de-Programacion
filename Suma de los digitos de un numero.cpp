/* Problema: Dado un digito entero N, obtener sus digitos
Ej: N= 67834 -----> 4 3 8 7 6
*/

#include <iostream>
using namespace std;

int main()
{ int N,d,S,Z,C;
  cout<<"Digite un valor d para N: ";  cin>>N;
    Z=N;
    C=0;
     S=0;  
    while(N>0)
	  {
	  d= N%10; //saca digito menos significativo, de la izquierda
	  S=S+d;
      N= N/10; // Truncar el digito menos significativo
      cout<<d<<endl;
      C++;
      }
    cout<<"Suma de digitos: "<<S<<endl;
    cout<<"El numero es : "<<Z<<endl;
	 cout<<"La cantidad de digitos es : "<<C<<endl;
	return 0;
}
