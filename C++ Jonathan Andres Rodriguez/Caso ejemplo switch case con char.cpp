#include <iostream>

using namespace std;

	main()
		{
			char opcion;
			cout<<"vamos a trabajar con switch-case \n";
			cout<<"ingrese una opcion \n";
			cin>>opcion;
			switch(opcion)
				{
					case's':
					case'S':
						cout<<"estoy en uno";
						break;
					case'p':
						cout<<"estoy en dos";
						break;
					case'h':
						cout<<"estoy en tres";
						break;
					default:
						cout<<"No estoy en nada";
						break;
				}
		}
