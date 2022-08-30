/*
Calcular la siguiente serie, donde X es un número real y e=2.71828
    S=e +  x^1/1! - x^2/2! + x^3/3!-  . . . +/-x^n/n!
    Jorge Urioste Hurtado
*/

#include <iostream>
using namespace std;

float pot(float x, float n)
{int i; float p;

  p=1;
  for(i=1;i<=n;i++)
  {
  	p=p*x;
  }
	return p;
}

int factorial(int x)
{int i,F;
    
   F=1; 
   for(i=1;i<=x;i++)
   {
   	F=F*i;
   }
   return F;

}

int main()
{int i,n,signo; float S,X,e=2.71828;
  
  cout<<"Digite el valor de X: "; cin>>X;
  cout<<"Digite el valor de N: "; cin>>n;
  
  
  S=e;
  signo=1;
  for(i=1;i<=n;i++)
  {
  	S=S+(signo*(pot(X,i)/factorial(i)));
  	signo=signo*(-1);
  	
  }
	cout<<"La suma es: "<<S<<endl;
	
	return 0;
}
