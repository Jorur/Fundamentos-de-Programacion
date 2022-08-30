/* Autor: Jorge Urioste
Fecha:14/8/2021
p05: Resolver la ecuacion ax+b=c */

#include <iostream>
using namespace std;

int main()
{float x,a,b,c;
cout<<"Introduzca los valores: a,b y c, repsectivamente:"<<endl;
cin>>a>>b>>c;

if(a==0) //Por verdadero es la primera estructura
{
cout<<"a es cero..."<<endl;
cout<<"Introduzca otro valor para a por favor"<<endl;
cin>>a;
x=(c-b)/a;
}

else // Por falso la segunda estructura
{
x=(c-b)/a;
}

cout<<"El valor de x es: "<<x<<endl;

return 0;

}
