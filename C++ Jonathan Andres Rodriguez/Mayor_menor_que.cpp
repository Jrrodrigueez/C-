#include <iostream>
	using namespace std;
	main()
	{
	int n1, n2,n3;
	cout<< "Ingrese los numeros";
	cin>>n1;
	cin>>n2;
	cin>>n3 ;
	
			if 	((n1<n2)&&(n2<n3))
			{
			cout<<"el numero menor es:"<<n1;
			cout<<"\n el numero medio es: "<<n2;
			cout<<"\n el numero mayor es: "<<n3;
			else
			{
				if 	((n1>n2)&&(n2>n3))
				{
			cout<<"el numero menor es:"<<n3;
			cout<<"\n el numero medio es: "<<n2;
			cout<<"\n el numero mayor es: "<<n1;
				}
			else
				 if 	((n1>n2)&&(n2<n3))
				{
			cout<<"el numero mejor es:"<<n2;
			cout<<"\n el numero medio es: "<<n1;
			cout<<"\n el numero mayor es: "<<n3;
				}
			}
			else
			if 	((n1>n2)&&(n2<n3))
				{
			cout<<"el numero mejor es:"<<n2;
			cout<<"\n el numero medio es: "<<n3;
			cout<<"\n el numero mayor es: "<<n1;
				}
			}
			else
			if 	((n1<n2)&&(n2>n3))
				{
			cout<<"el numero mejor es:"<<n3;
			cout<<"\n el numero medio es: "<<n1;
			cout<<"\n el numero mayor es: "<<n2;
				}
			}
			else
			if 	((n1>n2)&&(n2<n3))
				{
			cout<<"el numero mejor es:"<<n1;
			cout<<"\n el numero medio es: "<<n3;
			cout<<"\n el numero mayor es: "<<n2;
				}
			}
			}	
		
		}
	}
