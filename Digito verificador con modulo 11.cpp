/* Modulo 11
Dado un numero, obtener su digito verificador x
Si NR= 2021345 */

#include <iostream>
using namespace std;

int main()
{int N,d,X,i,S,R;
    cout<<"Digite el numero: "; cin>>N;
    S=0;
    
    for (i=2;i<=7;i++)
    {
    	d= N%10;
    	S= S+d*i;
    	N=N/10;
	}
    for(i=2;i<=4;i++)
    {
    	d=N%10;
    	S=S+d*i;
    	N=N/10;
	}
	R= S%11;
	
	if(R==0)
	{
		X=1;
	}
		else{if(R==10)
			{X=0;}
			  else {
			   	 X=11-R;
			    }
			
		       }
		  
	
cout<<"El valor de X es: "<<X<<endl;

}
