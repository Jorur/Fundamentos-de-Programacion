/**********************
 * Menu de areas Con switch
   1.- Area Del cuadrado A=L*L
   2.- Area del rectangulo A= B*H
   3.- Area del circulo A=pi*R*R
   3.- Fin
***********************
*/

#include <iostream>
using namespace std;

int main()
{ int op; float L,A,B,H, pi=3.1415,R;
   op=0;
   while (op!=4)
     {cout<<"Menu de areas"<<endl;
	        cout<<"1.- Area Del cuadrado A=L*L"<<endl;
            cout<<"2.- Area del rectangulo A= B*H"<<endl;
            cout<<"3.- Area del circulo A=pi*R*R"<<endl;
            cout<<"4.- Fin"<<endl;
            cout<<"Digite la opcion que desee"<<endl;
            cin>>op;
	     switch(op)
	     {
	  
	     case 1:
	     {
	     cout<<"Digite el lado:";
	     cin>>L;
	     A= L*L;
	     cout<<"Area cuadrado: "<<A<<endl;
	     break;
         }
         case 2:
         {
	     cout<<"Digite Base y altura"<<endl;
	     cout<<"B: "; cin>>B;
	     cout<<"H: "; cin>>H;
	     A= B*H;
	     cout<<"Area Rectangulo: "<<A<<endl;
	     break;
         }
         case 3:  
          {
	     cout<<"Digite el radio"<<endl;
	     cout<<"R: "; cin>>R;
	     A= pi*R*R;
	     cout<<"Area Circulo: "<<A<<endl;
	     break;
          }
         case 4: 
         {cout<<"Muchas gracias!"<<endl;
		  break;
		 }
         default:
	     {cout<<"Digite el una opcion del 1 al 4!"<<endl;}  
	      
		}//Fin Swtich, salida del break
		
     } // Fin del While

	
 return 0;	
          
}
