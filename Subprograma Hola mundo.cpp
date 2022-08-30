/* Subprogramas 
a)Hacer un subprograma de Hola Mundo
b)Repetir 3 veces
c) Repetir N veces
Subprograma de tipo procedimiento
     void nombre_subprograma (parametros)
*/

#include <iostream>
using namespace std;

void saludo();//interface del subprograma
int main()
{int i,N;
    cout<<"Digite el numero de veces: "; cin>>N;
    
    i=1;
    while (i<=N)
    {
    	cout<<i<<")"<<endl;
    	saludo();
    	i++;
	}
	return 0;
}
void saludo()//subprograma  // siempre que trae parentesis se pueden usar datos
{
	cout<<"****************"<<endl;
	cout<<"*  Hola Mundo! *  "<<endl;
	cout<<"****************"<<endl;
	
}
