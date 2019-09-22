#include <windows.h>
#include <iostream>

using namespace std;

main()
{
	char mensaje[]={'P','R','O','G','R','A','M','A','C','I','O','N',' ','D','E',' ','S','O','F','T','W','A','R','E'};
		for (int i=0;i<=25;i++)
			{
				cout<<"  "<<mensaje[i];
				Sleep(80);
			}
			cout<<"\n\n\n \t\t\t programa finalizado \n\n";
}
