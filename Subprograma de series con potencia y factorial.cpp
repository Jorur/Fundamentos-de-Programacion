/*Subprogramas 
Serie con potencias y factorial
*/

#include <iostream>
using namespace std;


int Fac(int N)
{int i,F=1;
	for(i=1;i<=N;i++)
	{
		F=F*i;
	}
	return F;
}


float Serie(float x,int n)
{int i; float p,S;

p=x; 
S=0;
for(i=1;i<=n;i++)
{
	S=S+p/Fac(i);
	p=p*x;
	
}
	return S;
}



int main()
{float x; int N;

cout<<"Digite el valor de x: "; cin>>x;
cout<<"Digite el valor de N: "; cin>>N;

cout<<"El resultado es: "<<Serie(x,N); 

return 0;
	
	
}
