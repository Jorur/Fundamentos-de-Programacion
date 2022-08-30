/*
Hacer un programa en C++, que lea el radio “R” de una esfera y presente un menú de opciones que permita calcular el perímetro, área o volumen de una esfera.
el valor Pi=3116 se define como una varible global.
***** MENU *****
a.	Cálculo de Perímetro 	P = 2 * Pi * R
b.	Cálculo de Área		A = 4 * Pi * R2
c.	Cálculo de Volumen		V = (4/3) * Pi * R3
d.	Salir
Autor:Jorge Urioste
*/

#include <iostream>
using namespace std;

void menu()
{
cout<<	"***** MENU *****"<<endl;
cout<<"a.	Calculo de Perimetro 	P = 2 * Pi * R"<<endl;
cout<<"b.	Calculo de area		A = 4 * Pi * R2"<<endl;
cout<<"c.	Calculo de Volumen		V = (4/3) * Pi * R3"<<endl;
cout<<"d.	Salir"<<endl;
	
}

int main()
{
	char op; int N; float R, pi=3.1416,r;
	
	op='g';
	while(op!='d')
	{
		menu();
		cout<<"Digite la opcion: "; cin>>op;
		op= tolower(op);
		
		switch (op)
		{
			case 'a':
				{
				cout<<"Digite el radio: "; cin>>R;
				r= 2*pi*R;
			    cout<<"El perimetro es: "<<r<<endl;
				break;	
				}
			case 'b':
			    {
			      cout<<"Digite el radio: "; cin>>R;
				  r= 4*pi*R*R;
				  cout<<"El area es: "<<r<<endl;
				  break;	
				}
			case 'c': 
			   {
			   	cout<<"Digite el radio: "; cin>>R;
			   	r= 1.3333*pi*R*R*R;
			   	cout<<"El volumen es: "<<r<<endl;
				break;
			   }
			case 'd':
			  {
			  	cout<<"Muchisimas gracias!!"<<endl;
			  } 
			default: 
			{
				cout<<"Digite alguna de las opciones mencionadas!"<<endl;
			}   		
		}
	}
	
	return 0;
}

