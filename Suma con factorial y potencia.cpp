/* Ejercicio 2
Suma de numeros con factorial 
S +/- P/F
Con factorial y potencia*/

#include <iostream>
using namespace std;

int main ()
{int N,i,F,sig; float x,P,S;
   
   cout<<"Digite el numero: "; cin>>x;
   cout<<"Digite la cantidad de veces:"; cin>>N;
   
   P=x;
   S=0;
   F=1;
   sig=1;
   for(i=1;i<=N;i++)
   {
   	F=F*i;
   	if(i%2!=0)
   	{S=S+(P/F);}
   	else 
   	{S=S-(P/F);}
   	P=P*x;
   }
   cout<<"El valor de la suma es: "<<S<<endl;
   
   
  
  
  return 0;	
}
