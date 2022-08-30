#include <iostream>

using namespace std;
void menu()
{
	cout<<"           -------MENU-------"<<endl;
	cout<<"1) Conocer la secuencia de cada 12 dias. "<<endl;
	cout<<"2) Promedio de conejos por dia que se producen"<<endl;
	cout<<"3) Total de conejos que tengo a n dias"<<endl;
    cout<<"4) Fin"<<endl;
}

//subprograma secuencia fibonacci
void fibonacci(int n)            //es void porque es una secuencia y no un resultado
{int i, A, B, C;
    A=1; B=1;
    cout<<A<<", "<<B<<", ";
    for(i=1; i<=n; i++)
    { C=A+B;
      cout<<C<<", ";
      A=B;
      B=C;
    }

	
}



int main()
{int opcion=0,n;
     while(opcion!=4)
     {menu();
      cout<<"Elija la opcion:";cin>>opcion;
      switch(opcion)
      {
	  
      case 1:{cout<<"cuantos dias:"; cin>>n;
               fibonacci(n);
               break;}
      //fin del switch
       case 2:
       case 3:
       case 4: cout<<"gracias!!!"<<endl;
       }
	   }
	 }  //fin del while
	

