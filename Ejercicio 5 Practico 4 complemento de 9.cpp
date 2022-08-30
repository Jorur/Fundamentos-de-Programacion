/* 5.	Hallar el complemento a 9 de un número entero 
N.  Ej. 4567, su complemento es 5432. */

#include <iostream>
using namespace std;

int main()
{int N,C,d,NC,Z,S;
   
   cout<<"Calculo del complemento de un numero "<<endl;
   cout<<"Digite el numero: "<<endl;
   cout<<"N: "; cin>>N;
   
   Z=N;
   d=0;
   NC=0;
   while(N>0)
     {
      d= N%10;
      N=N/10;
      C=9-d;
      NC=NC*10+C;
     }
     S=0;
    while (NC>0)
	{
	  d= NC%10;
      S=S*10+d;
	  NC=NC/10;
     
      
	}
	
	cout<<"El numero es: "<<Z<<endl;
	cout<<"El complemento es: "<<S<<endl;
}
