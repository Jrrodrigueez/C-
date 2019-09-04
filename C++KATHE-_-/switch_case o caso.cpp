#include <iostream>
using namespace std;
main()

	{
			int opcion;
			cout<<"vamos a trabajar con switch-case \n";
			cout<<"ingrese su opcion \n";
			cin>>opcion;
			switch (opcion)
				{
					case 1:
					case 8:
						cout<<"estoy en uno \n";
						break;
					
					case 2:
						cout<<"estoy en dos \n";
						break;	
					
					case 4:
						cout<<"estoy en cuatro \n";
						break;
						
					default:
						cout<<"no estoy en nada\n";
						break;
				}
	}
