#include <iostream>
using namespace std;
void suma();
void resta();
void mensaje();

void mensaje()
	{
		cout<<"estoy en la funcion mensaje \n";
	}
void resta()
	{
		cout<<"estoy en la funcion resta \n";
	}
	
void suma()
	{
		cout<<"estoy en la funcion suma \n";
	}
	
main()
{
	resta();
	mensaje();
	suma();
	mensaje();
	mensaje();
}

