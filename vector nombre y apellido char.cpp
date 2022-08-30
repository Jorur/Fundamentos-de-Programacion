/*Objetivo:  Leer e imprimir un vector de characteres
    manejar las funciones strlen, toupper, tolower
    manejar cin.get(var,n); lee linea con blancos
    cin.ignore()  borra buffer
*/

#include <iostream>
#include <string.h>
using namespace std;
#define NMAX 100


int main()
{
	char nombre[10],nomape[20]; int n,i;
	
	//strlen
	cout<<"Digite su nombre: ";
	cin>>nombre;
	cin.ignore(); //Limpia el buffer
	n=strlen(nombre);
	cout<<"Nombre: "<<endl;
	cout<<nombre<<endl;
	
    cout<<"Digite su nombre completo: ";
	cin.get(nomape,30);
	n=strlen(nomape);
	cout<<"Nombre y Apellido: "<<endl;
	cout<<nomape;
	

	
	
	return 0;
}
