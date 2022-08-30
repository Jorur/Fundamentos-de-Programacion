/* Ejercicio 3 
S= 3.1416+x/2!+x^2/3!+...+X^N/(n+1)!
*/
#include <iostream>
using namespace std;

int main()
{
	int N,i,F,sig; float x,P,S;
   
   cout<<"Digite el numero: "; cin>>x;
   cout<<"Digite la cantidad de veces:"; cin>>N;
   
   P=x;
   S=0;
   F=1;
   for(i=2;i<=N+1;i++)
   {
   	F=F*i;
   	S=S+(P/F);
   	P=P*x;
   }
   S=S+3.1416;
   cout<<"El valor de la suma es: "<<S<<endl;
   
   
  
  
  return 0;	
}

