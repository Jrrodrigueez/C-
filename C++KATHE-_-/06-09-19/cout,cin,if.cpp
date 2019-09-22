#include<iostream>

using namespace std;
main()

	{
		int comico[100],numero,mayo=0
		cout<<"ingrese la cantidad de elelementos delvector \n"
		cin>>numero;
		for(int i=0;i<numero; i++)
			{
				cout<<i+1<<"ingrese un numero";
				cin>>comico[i];
				if(comico[i]>mayor)
					{
						mayor=comico[i];
					}
			}
		cout<<"el numero mayor de los ingresados es:"<<mayor;
	}
