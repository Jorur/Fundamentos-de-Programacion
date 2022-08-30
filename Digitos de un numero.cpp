/* Problema: Dado un digito entero N, obtener sus digitos
Ej: N= 67834 -----> 4 3 8 7 6
*/

#include <iostream>
using namespace std;

int main()
{ int N,d;
  cout<<"Digite un valor d para N: ";  cin>>N;
   
    while(N>0)
	  {
	  d= N%10; //saca digito menos significativo, de la izquierda
      N= N/10; // Truncar el digito menos significativo
      cout<<d<<endl;
      }
    
    
	return 0;
}
