#include <iostream>
using namespace std;

int opcion;

void vector();
void matriz1();
void vector3();
void matriz8();
void vector5();
vo


		void vector()
		{
			string vector[] = {"Juan","Pedro","Maria","Jose","Petronio","Ancelmo"};
			
				string vector2[3];
					   vector2[0]="Felipe";
					   vector2[2]="Josefa";
					   vector2[1]="Martin";
				   
					   for (int i=0;i<=2;i++)
				   		   {
				   			cout<< vector2[i]<<"\n";
						   }
				           
		}
		void matriz1()
		{
			string matriz1[4][3]={{"Pedro","Juan","Jose"},{"Ana","Rocio","Pierna"},{"Victor","Pedro","Mila"},{"Juliana","Adriana","Rossana"}};
			
				   string matriz2[3][3];
				   		  matriz2[0][0]="Pablo";
				   		  matriz2[1][0]="Argemiro";
				   		  matriz2[0][1]="Vilma";
				   		  matriz2[1][2]="Ana";
				   		  matriz2[2][2]="Ismael";
				   		  
				   		  for (int i=0;i<=2;i++)
				   			{
				   			for (int j=0;j<=2;j++)	
				   				{
				   				cout<< matriz2[i][j]<<"\n";	
								}
							}
				   			
			
		} 
		void vector3()
		{
			char vector3[]= {'P','R','O','G','R','A','M','A','N','D','O'};
					char vector4[3];
						 vector4[1]='s';
						 vector4[2]='q';
						 vector4[0]='L';
							for (int i=0;i<=2;i++)
				   		   {
				   			cout<< vector4[i]<<"\n";
						   }
		}
		void matriz8()
		{
			char matriz8[4][3]={{'s','q','l'},{'M','A','R'},{'S','O','I'},{'P','A','N'}};
					char matriz3[3][3];
						 matriz3[0][3]='p';
						 matriz3[1][1]='l';
						 matriz3[2][2]='o';
						 for (int i=0;i<=2;i++)
				   			{
				   			for (int j=0;j<=2;j++)	
				   				{
				   				cout<< matriz3[i][j]<<"\n";	
								}
							}
		}
		void vector5()
		{
			double vector5[]={5.8,6.9,3.5};
			double vector6[2];
				   vector6[0]=8.3;
				   vector6[1]=8.0;
				   for (int i=0;i<=2;i++)
				   		   {
				   			cout<< vector6[i]<<"\n";
						   }
		}
		
	

main()
	{
		cout<<"Vector y Matriz \n";
			cout<<"ingrese su opcion \n";
			cin>>opcion;
		switch (opcion)
				{
					case 1:
						vector();
						break;
					case 2:
						 matriz1();
						 break;
					case 3:
						 vector3();
						 break;
					case 4:
						 matriz8();
						 break;
					case 5:
						 vector5();
						 break;
					default:
						cout<<"Saliendo...";
						break;	
				}
		
	}		

