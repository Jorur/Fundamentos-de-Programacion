/* Suma de numeros con factorial 
S +/- P/F
Con factorial y potencia*/

#include <iostream>
using namespace std;

int main ()
{int N,i,F,signo; float x,P,S;
   
   cout<<"Digite el numero: "; cin>>x;
   cout<<"Digite la cantidad de veces:"; cin>>N;
   
   P=x;
   S=0;
   F=1;
   signo=1;
   for(i=1;i<=N;i++)
   {
   	F=F*i;
   	S=S+signo*(P/F);
   	P=P*x;
   	signo=signo *(-1);
   }
   cout<<"El valor de la suma es: "<<S<<endl;
   
   
  
  
  return 0;	
}
