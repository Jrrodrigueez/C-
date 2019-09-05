#include <iostream>

using namespace std;

	main()
		{
			int opcion;
			cout<<"vamos a trabajar con switch-case \n";
			cout<<"ingrese una opcion \n";
			cin>>opcion;
			switch(opcion)
				{
					case 1:
					case 8:
						cout<<"estoy en uno";
						break;
					case 2:
						cout<<"estoy en dos";
						break;
					case 3:
						cout<<"estoy en tres";
						break;
					case 4:
						cout<<"estoy en cuatro";
					default:
						cout<<"No estoy en nada";
						break;
				}
		}
