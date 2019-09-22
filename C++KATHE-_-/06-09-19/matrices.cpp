#include<iostream>
usingnamespace std;

main()
{
	int cantidad[4][4];
	for(int i=0;i<4;i++)
		{
			for(int j=0;j<4;j++)
				{
					cout<<"digite un numero["<<i<<"]["<<j<<"]\n;
					cin>>cantidad[i][j];
				}
		}
		cout<<enl<<\t\t\t<<"imprimiendo...";
	for(int i=0;i<4;i++)
		{
			for(int j=0;j<4;j++)
				{
					cout<<"["<<i<<"]["<<j<<"]\n";
					cout<<cantidad[i][j]<<"\n";
				}
			cout<<"usted va en:"<<i<<endl";
		}
}

