/*6.	Dado un n�mero entero en base 8, comprobar si alguno de sus d�gitos no corresponden a su base.  
Ej. El n�mero 2762823, el d�gito 8 no corresponde a la base. */

#include <iostream>
using namespace std;

int main  ()
{ int N,d;
  cout<<"Comprobacion de digitos: numero octal: "<<endl;
  cout<<"Digite el numero a comprobar: "; cin>>N;
  
  d=0;
  while(N>0)
  {
  	d=N%10;
  	N=N/10;
  	if(d>=8)
  	  {
  	  	cout<<d<<" no es un digito octal"<<endl;
	  }
  }
	
}
