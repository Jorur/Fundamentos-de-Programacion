/* Dada la sucesion 1,1,2,3,5,8,13,21,34,55,etc
hacer un programa para calcular lo siguiente
Conocer la secuencia de cada 12 dias
Promedio de conejos que se reproducen por dias
De forma modular*/

#include <iostream>
using namespace std;

void menu()
{
	cout<<"************************************************************"<<endl;
    cout<<"                           Menu                       "<<endl;
    cout<<"1) Generar secuencia de reproduccion de conejos "<<endl;
    cout<<"2) Promedio de reproduccion de conejos "<<endl;
    cout<<"3) Total de conejos a cierto dia" <<endl;
    cout<<"4) Precio total de conejos a dia n, costo unitario(250bs)" <<endl;
    cout<<"5) Fin" <<endl;
	cout<<"*************************************************************"<<endl;
}

void fibonacci(int x) //void solo para imprimir
{int i,A,B,C;
   
   A=0;
   B=1;
   cout<<A<<","<<B<<",";
   for(i=1;i<=x/12;i++)
   {
   	C=A+B;
   	cout<<C<<",";
   	A=B;
   	B=C;
   }
   cout<<endl;
	
}
float suma(int x) 
{int i,S,A,B,C;

    A=0;
    B=1;
    S=A+B;
	for(i=1;i<=x/12;i++)
	{
		C=A+B;
	 	S=S+C;
	 	A=B;
   	    B=C;
	}
	return S;
}


int main()
{int op,n; float promedio;

    op=0;
    while(op!=5)
    {
    	menu();
    	cout<<"Digite la opcion: "; cin>>op;
    	switch (op)
    	{
    		case 1:
    			{
    				cout<<"Cuantos dias: "; cin>>n;
    				fibonacci(n);
    				break;
				}
    		case 2:
    			{
    				cout<<"Cuantos dias: "; cin>>n;
    	    		promedio=suma(n)/n;
    	    		cout<<"El promedio de reprudccion es :"<<promedio<<endl;
    	    		break;	
				}
    	    case 3:
    	    	{
    	    	    cout<<"Cuantos dias: ";  cin>>n;
    				cout<<"La suma es: "<<suma(n)<<endl;
    				break;
				}
			case 4:
				{
					cout<<"Cuantos dias: ";  cin>>n;
    				cout<<"La precio es: "<<suma(n)*250<<endl;
    				break;
					
				}
    	    case 5: 
			     {
				cout<<"Muchas Gracias!!"<<endl;
				break;
		         }
    	    default:
    	    	{
    	    		cout<<"Digite un numero del 1 al 4"<<endl;
				}
		}
	}


    return 0;
}
