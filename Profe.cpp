
#include <iostream>
#include <string.h>
using namespace std;

int main()
{char Texto[100]="Esta es una entrada de texto para probar numero listas";
 string palabras[50],palaux;
 int n,i,j;
    n=strlen(Texto);
    palaux="";j=0;
    for(i=0;i<n;i++)
    {   if(Texto[i]!=' ')
         {palaux=palaux+Texto[i];}
         else //tiene una palabra
         {if(Texto[i-1]=='a'||Texto[i-1]=='s')
            { palabras[j]=palaux; j++;}
          //cout<<"PALABRA:"<<palaux<<endl;
          palaux="";
         }
    } //fin del for
    if(Texto[i-1]=='a'||Texto[i-1]=='s')
     { palabras[j]=palaux; j++;}
    //cout<<"PALABRA:"<<palaux<<endl;

    cout<<"listado de palabras desde string Texto"<<endl;
    for(i=0;i<j;i++)
    {
        cout<<palabras[i]<<endl;
    }
    return 0;
}
