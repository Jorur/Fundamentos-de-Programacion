// Subprograma de la potencia

#include <iostream>
using namespace std;

int pot(int x,int n)
{int p,i;//Variables locales

p=1;
for(i=1;i<=n;i++)
{
	p=p*x;
}
	return p;
}


int main()
{int x,N,R;//variables locales

cout<<"Digite el valor de la base: "; cin>>x;
cout<<"Digite el valor de la potencia: "; cin>>N;

cout<<"El resultado es: "<<pot(x,N)<<endl; //llamando a pot

R=pot(x,2)+pot(N,2);
cout<<"La potencia doble es: "<<R<<endl;

R= pot(pot(x,2),3);//composicion de potencias
cout<<"La potencia doble es: "<<R;	
	
	return 0;
}

