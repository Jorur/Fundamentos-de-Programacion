/*
Escribe un programa en C++, que pida el límite inferior y superior de un intervalo de números enteros. 
Si el límite inferior es mayor que el superior lo tiene que volver a pedir. 
A continuación, se van introduciendo números hasta que introduzcamos el 0, 
con el que termina el programa. Cuando termine el programa dará las siguientes respuestas:
a)  La suma de los números que están dentro del intervalo (intervalo abierto).
b)Cuantos números están fuera del intervalo.
c)	Informa si hemos introducido algún número igual a los límites del intervalo.
Ejemplo:
Límite Inferior= 3     Limite Superior= 8
Números Ingresados: 6, 2, 10, 3, 4, 5
	a) Suma = 15 (6+4+5)		
	b) números fuera de rango: 3		
	c) números igual a los límites: 1
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

