#include <iostream>

using namespace std;

main () 
{
	//1 al 20//
	cout<<"digite un numero menor a 123 para escala de numeros del 1 al 20 \n ";
	int n1,n2;
	cin >>n1;
	cout<<"\n";
	while (n1<123)
	{
		n2=1;
		while (n2<21)
		{
			cout<<n2  <<" \n";
			n2=	n2+1;
		}
		cout<<"\n \ndigite un numero menor a 123 para escala de numeros del  al 20 \n";
		cin>>n1;
	
		}	
		//20 al 40//
		cout<<"======================================= \n";
		
			cout<<"digite un numero menor a 123 para escala de numeros del 20 al 40 \n ";
			int n3,n4;
			cin>>n3;
			cout<<"\n";
			do
			{
				n4=20;
				do
				{
					cout<<n4<<" \n";
					n4=n4+1;
		
				}
				while (n4<=40);
				cout<<" \ndigite un numero menor a 123 para escala de numeros de 20  al 40 \n ";
				cin>>n3;
				
			}
			while(n3<123);
}
