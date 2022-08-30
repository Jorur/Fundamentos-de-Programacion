#include<iostream>
using namespace std;

int main()
{int A=17,B=5,C=8,S=0,r,i=0,x;

while (i<=5)
{
if (i==0)
{
r=A-(C%2)+B-10;
cout<<"La respuesta es: "<<r<<endl;
}
   else{if (i==1)
      {r=A+B*(C%3);
	  cout<<"La respuesta es: "<<r<<endl;}
	  
      else{if (i==2)
         {r=B*10/(C-4);
	     cout<<"La respuesta es: "<<r<<endl;}
	        
		  else{if (i==3)
         {r=S+(C*A);
	     cout<<"La respuesta es: "<<r<<endl;} 
	          
	          else{if (i==4)
              {S+A*(-1);
	          cout<<"La respuesta es: "<<r<<endl;} 
	              else{if (i==5)
	                  {x=(20-6)+15/3*2+14%4;
	                  cout<<"La respuesta de x es: "<<x<<endl;
					  }
	              	
	              	
	              	
				       }
				  
				  
				  }      
           }
		 }
     }
i++;
}

return 0;
}
