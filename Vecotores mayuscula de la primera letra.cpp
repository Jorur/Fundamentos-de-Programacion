/*Objetivo:  Convertir las primeras letras de un texto en mayuscula
    manejar las funciones strlen, toupper, tolower
    manejar cin.get(var,n); lee linea con blancos
    cin.ignore()  borra buffer */

#include <iostream>
#include <string.h>
using namespace std;
#define NMAX 100


int main()
{
	char nomape[NMAX]; int n,i,cont;
	
    cout<<"Digite su nombre completo: ";

	cin.get(nomape,30);
	n=strlen(nomape);
	cout<<"Nombre y Apellido: "<<endl;
	
	
	nomape[0]=toupper(nomape[0]);
	i=0;
	cont=1;
	while(nomape[i]!='\0')
	{
		if(nomape[i]==' ')
		{
		   nomape[i+1]=toupper(nomape[i+1]);
		   cont++;
		}
		i++;
	}
    cout<<nomape<<endl;
	cout<<"El numero de palabras es: "<<cont;
	
	return 0;
}
