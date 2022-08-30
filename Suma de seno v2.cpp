/*
Calcular la siguiente serie:
		S=1+  X^2/2! -  X^4/4! + X^6/6! - .......(+/-)X^(2*n)/(2*n)!;  n es impar (seno)
*/

#include <iostream>
using namespace std;

int main()
{int N,F,i,signo,c; float x,S,p;

cout<<"Digite el numero a sumar (x): "; cin>>x;
cout<<"Digite la cantidad de terminos (n): "; cin>>N;

S=1;
p=x*x;
F=2;
signo=1;
c=2;
for(i=1;i<=N;i++)
{
	S=S+(signo*p/F);
	p=p*x*x;
	signo=signo*(-1);
	F=F*(c+1)*(c+2);
	cout<<F<<endl;
	c=c+2;
	
}
	cout<<"El total es: "<<S<<endl;
}
