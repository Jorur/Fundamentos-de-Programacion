/* p08 v2: While
Calculo del area del rectangulo con repetcion
para un cierto numero de casos N
A=B*H
Fecha:2/9/2021
*/

#include <iostream>
using namespace std;

int main()
{float A,B,H;
int N,i; //i es un contador
i=0
cout<<"Cuantas areas quiere calcular?: ";
cin>>N;

while (i<N)
{

cout<< "Digite la Base y la altura: "<<endl;
cout<<"Base: ";
cin>>B;

cout<<"Altura: ";
cin>>H;

A= B*H;
cout<<"El area es: "<<A<<endl;
i++; //incrementa el valor de i

}//Fin del while

return 0;
	
}
