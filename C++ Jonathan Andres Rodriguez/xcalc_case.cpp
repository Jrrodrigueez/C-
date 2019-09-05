#include <iostream>
using namespace std;
main()
	{
			double n1,n2,resultado;
			char opcion;
			cout<<"vamos a trabajar con switch-case \n";
			cout<<"ingrese su opcion \n";
			cin>>opcion;
			switch (opcion)
				{
					case 's':
					case 'S':
						cout<<"Estoy en la funcion suma \n";
						cout<<"Digite primer digito: ";
						cin>>n1;
						cout<<"Digite segundo digito: ";
						cin>>n2;
						resultado=n1+n2;
						cout<<"el resultado es = "<<resultado;
						break;
					
					case 'r':
					case 'R':
						cout<<"Estoy en la funcion resta \n";
						cout<<"Digite primer digito: ";
						cin>>n1;
						cout<<"Digite segundo digito: ";
						cin>>n2;
						resultado=n1-n2;
						cout<<"el resultado es = "<<resultado;
						break;
						
					case 'm':
					case 'M':
						cout<<"Estoy en la funcion multiplicacion \n";
						cout<<"Digite primer digito: ";
						cin>>n1;
						cout<<"Digite segundo digito: ";
						cin>>n2;
						resultado=n1*n2;
						cout<<"el resultado es = "<<resultado;
						break;
					case 'd':
					case 'D':
							cout<<"Estoy en la funcion divicion \n";
						cout<<"Digite primer digito: ";
						cin>>n1;
						cout<<"Digite segundo digito: ";
						cin>>n2;
						resultado=n1/n2;
						cout<<"el resultado es = "<<resultado;
						break;
					default:
						cout<<"No estoy en nada";
						break;
				}
	}
