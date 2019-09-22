#include <iostream>
using namespace std;

main ()

	{
		cout<<"1\t2\t3\t4\t5\t6\t7\t8\t9"<<endl<<""<<endl;
		for (int tabla=1; tabla<10; tabla++)
			{
				for (int i=1; i<10; i++)
				{
					cout<< i*tabla<<"\t";
				}
				cout<<endl;		
			}
	
	}
