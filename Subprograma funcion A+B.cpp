/*
1) Hacer un subprograma de a+b

*/

#include <iostream>
using namespace std;

int suma(int x,int y) //interface
{int z;
	z=x+y;
	return z;
}

int main()
{ int A,B,C,R;
	cout<<"A: "; cin>>A;
	cout<<"B: "; cin>>B;
	C=suma(A,B);
	cout<<"La suma es: "<<C<<endl;
	
	C=suma(B,100);
	cout<<"La suma es: "<<C<<endl
	;
	C=suma(2*A,100);
	cout<<"La suma es: "<<C<<endl;
	
	//composiciones de funciones con la suma
	R=suma(suma(A,B),50);
	cout<<"La suma es: "<<R<<endl;
	
	
	return 0;
}
