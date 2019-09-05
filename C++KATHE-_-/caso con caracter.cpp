#include <iostream>
using namespace std;
main()

	{
			char opcion;
			cout<<"vamos a trabajar con switch-case \n";
			cout<<"ingrese su opcion \n";
			cin>>opcion;
			switch (opcion)
				{
					case 's':
					case 'S':
						cout<<"estoy en uno \n";
						break;
					
					case 'p':
						cout<<"estoy en dos \n";
						break;	
					
					case 'h':
						cout<<"estoy en cuatro \n";
						break;
						
					default:
						cout<<"no estoy en nada\n";
						break;
				}
	}
