/*
Escribe un programa en C++, que pida el l�mite inferior y superior de un intervalo de n�meros enteros. 
Si el l�mite inferior es mayor que el superior lo tiene que volver a pedir. 
A continuaci�n, se van introduciendo n�meros hasta que introduzcamos el 0, 
con el que termina el programa. Cuando termine el programa dar� las siguientes respuestas:
a)  La suma de los n�meros que est�n dentro del intervalo (intervalo abierto).
b)Cuantos n�meros est�n fuera del intervalo.
c)	Informa si hemos introducido alg�n n�mero igual a los l�mites del intervalo.
Ejemplo:
L�mite Inferior= 3     Limite Superior= 8
N�meros Ingresados: 6, 2, 10, 3, 4, 5
	a) Suma = 15 (6+4+5)		
	b) n�meros fuera de rango: 3		
	c) n�meros igual a los l�mites: 1
Jorge Urioste Hurtado	*/
#include <iostream>
using namespace std;

int main()
{
	int inf,sup,N,S,c,c1;
	cout<<"Digite los limites: "; cin>>inf>>sup;
	while(inf>sup)
	{
	cout<<"Digite los limites: "; cin>>inf>>sup;	
	}
	
	S=0;
	c=0;
	c1=0;
	while(N!=0)
	{
		cout<<"Digite el numero dentro del intervalo: "; cin>>N;
		
		
		if(N>inf && N<sup)
		{
			S=S+N;
		}
		if (N<inf)
		{
		c1=c1+1;	
		}
		if(N>sup)
		{
			c1=c1+1;
		}
		if(N==inf || N==sup)
		{
			c=c+1;
		}
	}
	cout<<"La suma es: "<<S<<endl;
	cout<<"Numeros fuera de rango: "<<c1<<endl;
	cout<<"Numeros igual a los limites: "<<c<<endl;
	


return 0;	
}

