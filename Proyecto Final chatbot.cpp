/*Proyecto final: chatbot
Autor:Jorge Urioste Hurtado
Nro de registro;: 2021110231
Este es el chatbot de un cine que ofrece entradas para las diferentes funciones que se estan dando de acuerdo a la edad que se ingresa.
Por lo tanto se muestran 3 diferentes menus de peliculas de diferentes rangos de edades.
Ademas de eso se presenta un menu de golosinas para comprar y si que se compra al menos algun tipo de golosina se aplica un descuento de 10%
sobre la compra de las entradas.
Ademas pide el nombre y nit para una factura.

*/
#include<iostream>
#include<string.h>
using namespace std;

void menu(int n)
{
	cout<<"Las peliculas que presentamos para tu edad el dia de hoy son las siguientes: "<<endl;
	if(n<=10)
	{
        cout<<"1.Caperucita Roja(40bs)"<<endl;
        cout<<"2.Buscando a Nemo(45bs) "<<endl;
        cout<<"3.Juego de Gemelas(30bs)"<<endl;	
	}
	if(n>10 && n<18)
	{
		cout<<"1.Los vengadores (35bs)"<<endl;
        cout<<"2.Harry Potter y las Reliquias de la muerte(50bs) "<<endl;
        cout<<"3.Superman el Hombre de Acero(45bs)"<<endl;
	
	}
	if(n>=18)
	{
	  cout<<"1.The Joker(48bs)"<<endl;
      cout<<"2.Batman el caballero de la noche(40bs)"<<endl;
      cout<<"3.El señor de los anillos(43bs)"<<endl;
	}
	

}
int eleccion(int n,int m)
{int cantidad=0,precio=0;

   cout<<"Cuantas entradas quieres? "; cin>>cantidad;
   	if(m<=10)
	{
	  
      switch(n)
      {
      	case 1: 
      	{
      		precio=cantidad*40;
      		break;
		}
		
		case 2: 
      	{
      		precio=cantidad*45;
      		break;
		}
		
	    case 3: 
      	{
      		precio=cantidad*30;
      		break;
		}	
	  }
	
	}
	if(m>10 && m<18)
	{
		switch(n)
      {
      	case 1: 
      	{
      		precio=cantidad*35;
      		break;
		}
		
		case 2: 
      	{
      		precio=cantidad*50;
      		break;
		}
		
	    case 3: 
      	{
      		precio=cantidad*45;
      		break;
		}	
	  }
	}
	if(m>=18)
	{
	  	switch(n)
      {
      	case 1: 
      	{
      		precio=cantidad*48;
      		break;
		}
		
		case 2: 
      	{
      		precio=cantidad*40;
      		break;
		}
		
	    case 3: 
      	{
      		precio=cantidad*43;
      		break;
		}	
	  }
	}
	

     
	return precio;
}

void Confiteria()
{
	cout<<"1.Pipocas Saladas(15bs)"<<endl;
	cout<<"2.Pipocas Dulces(15bs)"<<endl;
	cout<<"3.Coca Cola(10bs)"<<endl;
	cout<<"4.M&M's(8bs)"<<endl;
	cout<<"5.Panchito(12bs)"<<endl;
	cout<<"6.Nuggets(20bs)"<<endl;
	cout<<"7.Nada gracias..."<<endl;
}

int main()
{char nombre[1000],resp; int edad,opcion,precio,cantidad,nit; float total,descuento; string nomape;

	cout<<"---Hola mi nombre es Gideon. Bienvenido a la pagina del cine Central---"<<endl;
	cout<<"El dia de hoy te asistire en las compras que vayas a realizar..."<<endl<<endl;
	cout<<"Cual es tu nombre? "; cin>>nombre;
	cout<<"Mucho gusto,"<<nombre<<endl<<endl;
	
	cout<<"\nMe voy a encargar de sugerirte la mejores peliculas que tenemos de acuerdo a tu edad..."<<endl;
	cout<<"Digita tu edad por favor: "; cin>>edad; cout<<endl;
    menu(edad);
    cout<<endl;
    
    cout<<"Por favor digite el numero de la pelicula que le gustaria ver: "; cin>>opcion;
    cout<<"Muy buena eleccion!"<<endl;
    precio=eleccion(opcion,edad);
    cout<<endl; 
	
	
	cout<<"El dia de hoy contamos con un descuento!!"<<endl;
	cout<<"Contamos con el descuento que si compras algo en la confiteria, tienes 10% de descuento sobre tus entradas!!"<<endl; 
	while(resp!='s' && resp!='n')
	{
		cout<<"Te gustaria ver el menu?(s/n)"<<endl;
		cin>>resp;
		tolower(resp);
		if(resp=='s')
		{
			cout<<"Muy bien..."<<endl<<endl;
		    Confiteria();
		    cout<<endl;
		    total=precio-(precio*0.1);
		    
		    while(resp!='n')
		    {
		    	cout<<"Ingresa una opcion por favor: "; cin>>opcion;
		        
		    	switch(opcion)
		    	{
		    		case 1:
		    		{
		    		 cout<<"Cuantas quisieras? "; cin>>cantidad;
		    		 cout<<endl;
		    		 total=total+(15*cantidad);
					 break;	
					}
					
					case 2:
		    		{
		    		 cout<<"Cuantas quisieras? "; cin>>cantidad;	
		    		 total=total+(15*cantidad);
					 break;	
					}
					
					case 3:
		    		{
		    		 cout<<"Cuantas quisieras? "; cin>>cantidad;
					 cout<<endl;	
		    		 total=total+(10*cantidad);;
					 break;	
					}
					
					case 4:
		    		{
		    		 cout<<"Cuantas quisieras? "; cin>>cantidad;
		    		 cout<<endl;
		    		 total=total+(8*cantidad);
					 break;	
					}
					
					case 5:
		    		{
		    		 cout<<"Cuantas quisieras? "; cin>>cantidad;
					 cout<<endl;	
		    		 total=total+(12*cantidad);
					 break;	
					}
					
					case 6:
		    		{
		    		 cout<<"Cuantas quisieras? "; cin>>cantidad;
		    		 cout<<endl;
		    		 total=total+(20*cantidad);
					 break;	
					}
					
					case 7:
		    		{
		    		 cout<<"Esta bien :("<<endl;
					 break;	
					}
				}
				cout<<"Le gustaria algo mas? "; cin>>resp;
			}
		}
		else
		{
			if(resp=='n')
			{
				cout<<"Esta bien :("<<endl;
				total=precio;
			}
		
		}
	
	}
	

	
	cout<<endl<<endl;
	cout<<"Procesando... Espera un momento..."<<endl; 
    cout<<"El total a pagar sera: "<<total<<endl;
    
    cout<<"Te gustaria Factura?(s/n) "; cin>>resp;
    
     
      	if(resp=='s')
      	{
		  
      	cout<<"Numero de NIT: "; cin>>nit;
      	cout<<"A que nombre? ";
		cin.ignore(); 
		getline(cin,nomape);
      	
      	cout<<"Los datos para el NIT son: "<<endl;
      	cout<<nomape<<"  "<<nit<<endl<<endl;
	    }
	  
    
    cout<<"Muchas gracias por escogernos!"<<endl;
    cout<<"Que disfrutes la funcion "<<nombre<<endl;
    cout<<"Cuando vayas al cine se te dara todo lo comprado!"<<endl<<endl;
    cout<<"Hasta la proxima!!!"<<endl;
    
    
	return 0;
}

