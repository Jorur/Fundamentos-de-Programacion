/* Autor: Jorge Urioste
Fecha:14/8/2021
p06: Determinar si a<b,a>b,o a=b */

#include <iostream>
using namespace std;

int main()
{int a,b;
cout<<"Comparacion de los valores de a y b"<<endl;
cout<<"Digite los valores de a y b"<<endl;
cin>>a>>b;

if(a>b)
{
  cout<<"a es mayor que b..."<<endl;
}

else
{
	if (a==b)
	{
		cout<<"a es igual a b..."<<endl;
		
	}
	else
	{
		cout<<"a es menor que b..."<<endl;
	}
}

return 0;	
	
}
