#include <iostream>
#include <string.h>

using namespace std;



int main()
    
{string nombre; 
 int op, almacenamiento, colores, cantidad,aux; float costo=0; char celulares[250]="1. Iphone 11, 2. Iphone 11 Pro, 3. Iphone 12, 4. Iphone 12 Pro, 5. Iphone 13, 6. Iphone 13 Pro, 7. Nada más:";
 char computadoras[300]="1. MAC, 2. Macbook air, 3. Macbook pro 4. IMAC, 5. Iphone 13, 6. Iphone 13 Pro, 7. Nada más:";
    cout<<"Hola buen día, ";
    cout<<"escriba su nombre por favor: ";cin>>nombre;
    cout<<"Hola "<<nombre<<", bienvenido!!  ";
    cout<<"Hoy te ofrecemos 1)computadoras o 2)celulares:"<<endl<<endl;
    cout<<"cual te gustaria? "; cin>>aux;
    if(aux==1)
    {
      
      cout<<celulares;
	}
	else
	{
	  cout<<computadoras;
	}
	cout<<endl;
    cout<<"Elija una opción del 1 al 7: "<<endl;cin>>op;
    while(op!=7)
    {switch (op)
      {  case 1: 
      
                 cout<<"   Iphone 11  "<<endl; 
                 cout<<"    ¿Cuántos Iphone 11 desea?: "<<endl;cin>>cantidad;
                 cout<<"  Elija la cantidad de almacenamiento: "<<endl;
                 cout<<"    1. 64Gb $500 "<<endl;
                 cout<<"    2. 128Gb $550 "<<endl;cin>>almacenamiento;
                 if (almacenamiento==1)
                 {costo=costo+cantidad*500;}
                 else 
                 {costo=costo+cantidad*550;}
                 
                     cout<<"  De que color quiere el Iphone 11?:"<<endl<<endl; 
                     cout<<"    1. Negro "<<endl;
                     cout<<"    2. Blanco "<<endl;
                     cout<<"    3. Rojo "<<endl;
                     cout<<"    4. Verde "<<endl;cin>>colores;
                 
                 cout<<"    Su costo en $us es: $"<<costo<<endl<<endl;break;
                 
                 
         case 2: cout<<"   Iphone 11 Pro  "<<endl; 
                 cout<<"   ¿Cuántos Iphone 11 Pro desea?: "<<endl;cin>>cantidad;
                 cout<<"  Elija la cantidad de almacenamiento: "<<endl<<endl;
                 cout<<"    1. 64GB $600 "<<endl;
                 cout<<"    2. 256GB $650 "<<endl;cin>>almacenamiento;
                 if (almacenamiento==1)
                 {costo=costo+cantidad*600;}
                 else
                 {costo=costo+cantidad*700;}
                 
                     cout<<"  De que color quiere el Iphone 11 Pro?: "<<endl<<endl;
                     cout<<"    1. Verde Oscuro "<<endl;
                     cout<<"    2. Blanco Perla"<<endl;
                     cout<<"    3. Grafito"<<endl;
                     cout<<"    4. Dorado"<<endl;cin>>colores;
                 
                 cout<<"     Su costo en $us es: $"<<costo<<endl<<endl;break;
                 
                 
         case 3: cout<<"   Iphone 12 "<<endl;
                 cout<<"   ¿Cuántos Iphone 12 desea?: "<<endl;cin>>cantidad;
                 cout<<"  Elija la cantidad de almacenamiento:"<<endl<<endl;
                 cout<<"    1. 64GB $700 "<<endl;
                 cout<<"    2. 128GB $750 "<<endl;cin>>almacenamiento;
                 if (almacenamiento==1)
                 {costo=costo+cantidad*700;}
                 else 
                 {costo=costo+cantidad*750;}
                 
                     cout<<"  De que color quiere el Iphone 12?: "<<endl<<endl;
                     cout<<"    1. Azul"<<endl;
                     cout<<"    2. Blanco"<<endl;
                     cout<<"    3. Rojo"<<endl;
                     cout<<"    4. Negro"<<endl;
                     cout<<"    5. Morado"<<endl;cin>>colores;
                     
                 cout<<"     Su costo en $us es: $"<<costo<<endl<<endl;break;
                 
                 
         case 4: cout<<" Iphone 12 Pro  "<<endl; 
                 cout<<"   ¿Cuántos Iphones 12 Pro desea?: "<<endl;cin>>cantidad;
                 cout<<"  Elija la cantidad de almacenamiento: "<<endl;
                 cout<<"    1. 128GB $1100"<<endl;
                 cout<<"    2. 256GB $1200";cin>>almacenamiento;
                 if (almacenamiento==1)
                 {costo=costo+cantidad*1100;}
                 else
                 {costo=costo+cantidad*1200;}
                 
                     cout<<"  Elija el color del Iphone 12 Pro: "<<endl<<endl;
                     cout<<"    1. Azul Oscuro "<<endl;
                     cout<<"    2. Dorado "<<endl;
                     cout<<"    3. Grafito "<<endl;
                     cout<<"    4. Plateado "<<endl;cin>>colores;
                     
                 cout<<"     Su costo en $us es: $"<<costo<<endl<<endl;break;
                 
                
         case 5: cout<<"   Iphone 13  "<<endl;
                 cout<<"   ¿Cuántos Iphone 13 desea?: "<<endl;cin>>cantidad;
                 cout<<"  Elija la cantidad de almacenamiento:" <<endl;
                 cout<<"    1. 128GB $800 "<<endl;
                 cout<<"    2. 256GB $900 "<<endl;cin>>almacenamiento;
                 if(almacenamiento==1)
                 {costo=costo+cantidad*800;}
                 else
                 {costo=costo+cantidad*900;}
                 
                     cout<<"  Elija el color del Iphone 13: "<<endl;
                     cout<<"    1. Azul "<<endl;
                     cout<<"    2. Gris Oscuro "<<endl;
                     cout<<"    3. Dorado "<<endl;
                     cout<<"    4. Blanco "<<endl;
                     cout<<"    5. Rojo "<<endl;cin>>almacenamiento;
                     
                 cout<<"     Su costo en $us es: $"<<costo<<endl<<endl;break;
                 
                 
         case 6: cout<<"   Iphone 13 Pro  "<<endl;
                 cout<<"   ¿Cuántos Iphone 13 Pro desea?: "<<endl;cin>>cantidad;
                 cout<<"  Elija la cantidad de almacenamiento: "<<endl<<endl;
                 cout<<"    1. 128GB $1200 "<<endl;
                 cout<<"    2. 256GB $1300 "<<endl;cin>>almacenamiento;
                 if (almacenamiento==1)
                 {costo=costo+cantidad*1000;}
                 else
                 {costo=costo+cantidad*1100;}
                 
                     cout<<"Elija el Color del Iphone 13 Pro:"<<endl<<endl;
                     cout<<"1. Celeste "<<endl;
                     cout<<"2. Plateado "<<endl;
                     cout<<"3. Dorado "<<endl;
                     cout<<"4. Grafito"<<endl;cin>>almacenamiento;
                     
                 cout<<"     Su costo en $us es: $"<<costo<<endl<<endl;break;
                 
         case 7: cout<<" Nada más"<<endl;break;
       default: cout<<"Elija otra vez "<<endl;
      }
     cout<<"  Se le ofrece algo más?: "<<endl<<endl<<celulares<<endl;
     cout<<" Elija una opción del 1 al 7: "<<endl;cin>>op;
    }
    cout<<"Su monto total el dia de hoy es: $"<<costo<<endl<<endl;
    cout<<"   ¡Muchas gracias, vuelva otra vez!"<<endl;
    
    
    
    return 0;
}
