/* 10.	Hacer un programa para convertir un número entero en el sistema binario 
(Ej. 100011010) a su equivalente en el sistema decimal. */

#include <iostream>
#include <math.h>
using namespace std;

int main()
{int B,d,i,N;
   cout<<"Coversion de numeros Binarios a decimales"<<endl;
   cout<<"Digite el numero binario: "; cin>>B;
   
 
   if (B==0)
   {N=0;}
   
   else { if(B==1)
   {N=1;}
   	
   else {
   
   N=0;
   i=0;
   d=0;
   while(B>0)
   {
   	d=B%10;
   	B=B/10;
   	N=N+(d*pow(2,i));
   	i++;
   	
   }
	
     }
}
  cout<<N; 
   return 0;
}
