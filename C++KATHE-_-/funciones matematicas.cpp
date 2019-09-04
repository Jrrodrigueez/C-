#include <iostream>
using namespace std;
void suma();
void resta();
void multiplicacion();
void division();

void resta()
	{
		cout<<"Estoy en la funcion resta \n";
						cout<<"Digite primer digito: ";
						cin>>n1;
						cout<<"Digite segundo digito: ";
						cin>>n2;
						resultado=n1-n2;
						cout<<"el resultado es ="<<resultado;
	}
	
void suma()
	{
			cout<<"Estoy en la funcion suma \n";
						cout<<"Digite primer digito: ";
						cin>>n1;
						cout<<"Digite segundo digito: ";
						cin>>n2;
						resultado=n1+n2;
						cout<<"el resultado es ="<<resultado;
	}
	
	void multiplicacion()
	{
			cout<<"Estoy en la funcion multiplicacion \n";
						cout<<"Digite primer digito: ";
						cin>>n1;
						cout<<"Digite segundo digito: ";
						cin>>n2;
						resultado=n1*n2;
						cout<<"el resultado es ="<<resultado;
	}
	
	void division()
	{
			cout<<"Estoy en la funcion division \n";
						cout<<"Digite primer digito: ";
						cin>>n1;
						cout<<"Digite segundo digito: ";
						cin>>n2;
						resultado=n1/n2;
						cout<<"el resultado es ="<<resultado;
	}
	
main()
{
	resta();
	suma();
	multiplicacion();
	division();
	double n1,n2,resultado;
}

