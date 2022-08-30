/* Suma de cuadrados de los primeros n numeros
1^2+2^2+3^3....+N^2
*/

#include <iostream>
using namespace std;

int main()
{int i,S,N,p;
   cout<<"Digite el numero hasta el que quiere sumar: "; cin>>N;
   
   p=0;
   S=0;
   for(i=1;i<=N;i++)
   {
   	p=i;
   	p=p*p;
   	S=S+p;
   	//cout<<i<<endl;
   }
   cout<<"El resultado es: "<<S<<endl;
   
   return 0;
	
}
