/*Desarrolle un programa para hacer seguimiento al contagio de
la enfermedad COVID-19. Controlado bajo un MENU.
Se conoce que la secuencia de contagio, a partir del día cero,
es que este se duplica cada 3 días, con esta información 
realizar lo siguiente:

	    MENU CONTROL COVID-19
- - - - - - - - - - - - - - - - - - - - - -
1. Generar la secuencia de contagiados hasta el día n.
2. Obtener el total de contagiados al día n.
3. Obtener el promedio de contagios por día.
4. FIN
*/

#include <iostream>
using namespace std;

int main()
{int N,i,op,p,S,c; float promedio;

cout<<"*************************************"<<endl;
cout<<"        Menu control COVID-19     "<<endl;
cout<<"1. Secuencia de contagiados al dia n. "<<endl;
cout<<"2. Total de contagiados al dia n."<<endl;
cout<<"3. Promedio de contagiados por dia "<<endl;
cout<<"4. Fin "<<endl;
cout<<"*************************************"<<endl;

cout<<"Digite la cantridad de dias : "; cin>>N;
cout<<"Digite la opcion que guste: ";  cin>>op;

S=0;
p=1;
c=0;
switch(op)
{
	case 1:
	{
		for(i=0;i<=N;i=i+3)
		{
		   cout<<c<<")"<<p<<endl;
		   p=p*2;
		   c++;
		}
	  break;
	}
	
	case 2:
	{
		for(i=0;i<=N;i=i+3)
		{
			S=S+p;
			p=p*2;
		}
		cout<<"El total de contagiados al dia "<<N<<" es: "<<S;
		break;
	}
	case 3: 
	{
	   	for(i=0;i<=N;i=i+3)
		{
			S=S+p;
			p=p*2;
		}
		
		promedio=S/N;
		cout<<"El promedio al dia "<<N<<" es:"<<promedio;
		break;
	}
	case 4:
		{
		  cout<<"Muchas Gracias!!"<<endl;
		  break;
		}
		
	default: 
	{
		cout<<"Digite un numero del 1 al 4!"<<endl;
	}
	
	
	
	
}


return 0;	
}

//Jorge Urioste Hurtado
