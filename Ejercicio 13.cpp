/* Ejercicio 13: Cacular la diferencia de horas.
13.	Construir un algoritmo que lea dos horas del mismo día y halle la diferencia entre ellas. El ingreso de las horas debe ser en formato de 24 horas: HH, MM, SS, como así también la diferencia.
Ejemplo: 
Hora Inicial:	 10 Hr    50 Min  40 Seg
Hora Final:	 21 Hr    30 Min  10 Seg
Diferencia:	 10 Hr    39 Min  30 Seg
NOTA: Use los conceptos empleados en el ejemplo anterior
*/

#include <iostream>
using namespace std;

int main()
{     int h,m,s,h1,m1,s1,ht,mt,st,t,t1,T;
     cout<<"Digite la primera Hora: "<<endl;
      cout<<"Hora:"; cin>>h;
      cout<<"Minutos:"; cin>>m;
      cout<<"Segundos:"; cin>>s;

	 t= (h*3600)+(m*60)+s;

	 cout<<"Digite la segunda Hora: "<<endl;
	 cout<<"Hora:"; cin>>h1;
	 cout<<"Minutos:"; cin>>m1;
	 cout<<"Segundos:"; cin>>s1;

	 t1= (h1*3600)+(m1*60)+s1;

	 T=t-t1;
	 if (T<0)
	 {
	 	T=-T;
	 }
	 
	 ht=T/3600;
	 mt=(T-ht*3600)/60;
     st=T-((ht*3600)+(mt*60));
    
     cout<<"La hora es: "<<ht<<":"<<mt<<":"<<st<<endl;
     
		
	return 0;
	
}
