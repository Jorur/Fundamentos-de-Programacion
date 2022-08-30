/**********************
 * Menu de areas 
   1.- Area Del cuadrado A=L*L
   2.- Area del rectangulo A= B*H
   3.- Area del circulo A=pi*R*R
   3.- Fin
***********************
*/

#include <iostream>
using namespace std;

int main()
{ char op='g'; float L,A,B,H, pi=3.1415,R;
   op=0;
   while (op!='d')
     {cout<<"Menu de areas"<<endl;
	        cout<<"a.- Area Del cuadrado A=L*L"<<endl;
            cout<<"b.- Area del rectangulo A= B*H"<<endl;
            cout<<"c.- Area del circulo A=pi*R*R"<<endl;
            cout<<"d.- Fin"<<endl;
            cout<<"Digite la opcion que desee"<<endl;
            cin>>op;
            op= tolower(op);
	  
	  if (op=='a')
	   {
	     cout<<"Digite el lado:";
	     cin>>L;
	     A= L*L;
	     cout<<"Area cuadrado: "<<A<<endl;
       }
     if (op=='b')
       {
	     cout<<"Digite Base y altura"<<endl;
	     cout<<"B: "; cin>>B;
	     cout<<"H: "; cin>>H;
	     A= B*H;
	     cout<<"Area Rectangulo: "<<A<<endl;
       }
     if (op=='c')  
       {
	     cout<<"Digite el radio"<<endl;
	     cout<<"R: "; cin>>R;
	     A= pi*R*R;
	     cout<<"Area Circulo: "<<A<<endl;
       }
 	 }
	
	cout<<"Muchas Gracias!"<<endl;
	
 return 0;	
}   
