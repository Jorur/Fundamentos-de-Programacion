#include <iostream>
using namespace std;

int main() {
//Declarar variables
int peso, estatura,total,estatura2;

//Ingreso de datos
cout<<"Ingrese su peso (kg): ";cin>>peso;
cout<<"Ingrese su estatura (m): ";cin>>estatura;

//Ecuaciones
estatura2= estatura*estatura;
total=peso/estatura2;

cout<<"La masa corporal es :";cout<<total;

  return 0;

}
