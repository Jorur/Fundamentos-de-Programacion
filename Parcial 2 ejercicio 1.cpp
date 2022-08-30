/*
Calcular la siguiente serie, donde X es un número real y k una constante real.

	T=x^1/k - x^2/k + x^3/k- . . . +-x^n/k
	Autor: Jorge Urioste Hurtado
*/

#include <iostream>
using namespace std;

int main()
{int i,N,signo; float x,p,k,S;

    cout<<"Digite el valor de x: "; cin>>x;
    cout<<"Digite el valor de n: "; cin>>N;
    cout<<"Digite el valor de k: "; cin>>k;

    p=x;
    S=0;
    signo=1;
    for(i=1;i<=N;i++)
    {
    	S=S+(signo*p/k);
    	p=p*x;
    	signo=signo*(-1);	
	}
	cout<<"La suma es: "<<S;
	
	
	return 0;
}
