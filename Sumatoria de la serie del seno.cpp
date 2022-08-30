/*
Serie del seno 
S= x/1!-x^3/3!+x^5/5!-.....+/- x^N/N!
Factorial impar
Para n=3, x=2.5, S=0.7096 
*/


#include <iostream>
using namespace std;

int main ()
{int N,i,F,C,signo; float x,P,S;
   
   cout<<"Digite el numero: "; cin>>x;
   cout<<"Digite la cantidad de veces:"; cin>>N;
   
   P=x;
   S=0;
   F=1; C=1;
   signo=1;
   for(i=1;i<=N;i++)
   {
   	//F=F*i;
   	S=S+signo*(P/F);
   	P=P*x*x;
   	F=F*(C+1)*(C+2);
   	cout<<"F!= "<<F<<endl;
	signo=signo *(-1);
	C=C+2;
   	
   }
   cout<<"El valor de la suma es: "<<S<<endl;
   
   
  
  
  return 0;	
}
