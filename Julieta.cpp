#include <iostream>
using namespace std;

int main() {

  //Declarar Variables
int opcion, entrada, ci, total, dinero;
string palomitas, apellido;

//Mensaje
cout<<"Bienvenido a la p�gina del cine. A continuaci�n se mostrar�n las categor�as disponibles para la compra de entradas de la pel�cula. Escoge las opciones que mejor se acomoden a lo que necesitas."<<endl;
cout<<"Ficci�n 3D - 60bs = 1 "<<endl;
cout<<"Ficci�n 2D - 50bs = 2"<<endl;
cout<<"Comedia - 45bs = 3"<<endl;
cout<<"Romance - 40bs = 4"<<endl;
cout<<"Acci�n 3D - 55bs = 5"<<endl;
cout<<"Por 40 bs extras, puedes adquirir un combo de palomitas que adem�s te dar� un 15% de descuento."<<endl;
//Ingreso De Datos

cout<<"Elige una categor�a de pel�cula: ";cin>>opcion;
cout<<"Elige la cantidad de entradas: ";cin>>entrada;
if(opcion==1)
{
	dinero=entrada*60;
}
if(opcion==2)
{
	dinero=entrada*50;
}
if(opcion==3)
{
	dinero=entrada*45;
}
if(opcion==4)
{
	dinero=entrada*40;
}
if(opcion==5)
{
	dinero=entrada*55;
}


cout<<"�Deseas el combo de palomitas? ";cin>>palomitas;
cout<<"Escriba su apellido: ";cin>>apellido;
cout<<"Escriba su numero de CI o NIT: ";cin>>ci;

if (palomitas == "no")
{
total = dinero;

}
else
{
	total= (dinero*0.15)+40;
}

cout<<"El precio de las entradas es de ";cout<<total;

return 0;
}
