/* p08: While
Calculo del area del rectangulo con repetcion
A=B*H
Fecha:2/9/2021
*/
#include <iostream>
using namespace std;

int main()
{float A,B,H;
char r='s';
while (r=='s'){

cout<< "Digite la Base y la altura: "<<endl;
cout<<"Base: ";
cin>>B;

cout<<"Altura: ";
cin>>H;

A= B*H;
cout<<"El area es: "<<A<<endl;
cout<<"Tiene mas datos(s/n)? "<<endl;
cin>>r;
}//Fin del while

return 0;
	
}
