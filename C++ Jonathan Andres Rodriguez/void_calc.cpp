#include <iostream>
using namespace std;
void suma();
void resta();
void multiplicacion();
void division();
void mensaje();
double n1,n2,resultado

void suma()
	{
		cout<<"estoy en la funcion suma \n";
		cout<<"Digite primer digito: ";
		cin>>n1;
		cout<<"Digite segundo digito: ";
		cin>>n2;
		resultado=n1+n2;
		cout<<"el resultado es = "<<resultado;
	}
void resta()
	{
		cout<<"estoy en la funcion resta \n";
		cout<<"Digite primer digito: ";
		cin>>n1;
		cout<<"Digite segundo digito: ";
		cin>>n2;
		resultado=n1-n2;
		cout<<"el resultado es = "<<resultado;
	}
	
void multiplicacion()
	{
		cout<<"estoy en la funcion multiplicacion \n";
		cout<<"Digite primer digito: ";
		cin>>n1;
						cout<<"Digite segundo digito: ";
						cin>>n2;
						resultado=n1*n2;
						cout<<"el resultado es = "<<resultado;
	}
void division
	{
		cout<<"estoy en la funcion division \n";
		cout<<"Digite primer digito: ";
						cin>>n1;
						cout<<"Digite segundo digito: ";
						cin>>n2;
						resultado=n1/n2;
						cout<<"el resultado es = "<<resultado;
	}
	
main()
{
	
	suma();
	resta();
	division();
	multiplicacion();
	mensaje();
}
