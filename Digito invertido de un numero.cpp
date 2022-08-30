/* Problema: Dado un digito entero N, obtener sus digitos
Ej: N= 67834 -----> 4 3 8 7 6
Problema: Obteneter M= 67834
*/

#include <iostream>
using namespace std;

int main()
{ int N,d,Z,M;
     cout<<"Digite un valor d para N: ";  cin>>N;
     Z=N;
     M=0;
     while(N>0)
	   {
	   d= N%10; //saca digito menos significativo, de la izquierda
	   M=M*10+d;
       N= N/10; // Truncar el digito menos significativo
       cout<<d<<",";
       }
       cout<<endl<<"N= "<<Z<<endl;
       cout<<"El numero invertido es: "<<M<<endl;
     
    
	  return 0;
   }
