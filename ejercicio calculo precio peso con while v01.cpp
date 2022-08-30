/* Ejercicio 1: Calculo de precio en relacion al peso
   Fecha: 27/8/21
*/

#include <iostream>
using namespace std;

int main()
{ float P,Precio;
char r='s';
cout<< "Calculo de precio de envio de cartas:"<<endl;

while (r=='s'){

cout<<"Peso: ";
cin>>P;
cout<<endl;



if (P>0 && P<=50)
{
 Precio= 1.5;
}
else{ if (P>0 && P<=50)
	{Precio=1.5;}
	 else{ if (P>50 && P<=100)
	 {Precio=4.0;}
	      else{ if (P>100 && P<=200)
	          {Precio=6.0;}  
			  else{ if (P>200 && P<=350)
 	              {Precio=10.5;} 
			     else{ if (P>350 && P<=500)
	                 {Precio=15;} 
	                 else{ if(P>500)
					     cout<<"No puede enviar como carta..."<<endl;
					     return 0;
					     }
                           
					 
					 
					 }
				  
				  
				  
				  }
			  
			  }  

		 
		 }    
     }
cout<<"El precio es: "<<Precio<<endl;
cout<<"Tiene mas cartas?";   
cin>>r;
}
return 0;							
}
	
