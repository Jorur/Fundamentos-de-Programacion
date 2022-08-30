/* Ejercicio 1.2: Calculo de precio en relacion al peso
   Fecha: 27/8/21
   Segunda manera
*/

#include <iostream>
using namespace std;

int main()
{ float P,Precio,Descuento;
    cout<<"Peso:";
	cin>>P;
	if (P>0 && P<=50)
	 {Precio=1.5;}
	
	if (P>50 && P<=100)
	 {Precio=4;}
	
	if (P>100 && P<=200)
	 {Precio=6;}
	
	if(P>200)
	 {cout<<"No puede enviar por este medio"<<endl;}
	
	else
	{Descuento=Precio*0.85;
     cout<<"Con descuento de 15% es: "<<Descuento<<endl;	
	}
return 0;
}
