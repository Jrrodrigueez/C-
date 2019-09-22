#include <iostream>
using namespace std;

void suma();
void par_impar();
void caracter();
void mensaje();
void sumatoria_pares();
void Para_impares();
void mientras();

		int opcion,x1,a,b,c,d,res;
		double n1,n2,n6,h,b1;
		char letra,K;	
		
		void suma()
		{
						cout<<"Estoy en la funcion suma \n";
						cout<<"Digite primer digito: ";
						cin>>n1;
						cout<<"Digite segundo digito: ";
						cin>>n2;
						n6=n1+n2;
						cout<<"el resultado es = "<<n6;	
		}
		void par_impar()
		{
						cout<<"Estoy en la funcion par o impar ";
						cout<<"Digite un numero= ";
						cin>>x1;
						
							if (x1%2==0){
								cout<<"PAR \n";
								cout<<"Salida= \n";
								 for (a=1 ; a<=10 ; a++)
    							{
       								 b=a%2;
    								    if (b==0)
      			  					{
                 						 cout <<a<<endl;
        							}
    							}  
							}
   							  
    						else{
								cout<<"IMPAR \n";
								cout<<"Salida= \n";
								for (d=20 ; d<=30 ; d++)
    							{
								 c=d%2;
      								  if (c==1)
        							{
                  						cout <<d<<endl;
        							}
    							} 
							}
		}
			void caracter()
		{
						cout<<"Estoy en la funcion caracter \n";
						cin>>K;
						if (K!='s')
						{
							for (b=1; b<=10; b++)
							{
								res = 5 * b;
								cout<< 5 << " X " << b << " = " << res << "\n";
							}
						}
						else
						{
							 cout<<"Ingresa base"<<endl;
       						 cin>>b1;
       						 cout<<"Ingresa altura"<<endl;
       						 cin>>h;
       						 double area;
       						 area=b1*h/2;
      						 cout<<area;
						}
		}
			void mensaje()
			{
				cout<<"Buenas noches";
			}
			void sumatoria_pares()
			{
			
			}
			void Para_impares()
			{
				
			}
			void mientras()
	
main()
	{                                          
	
		
		cout<<"Ejercicio con funciones \n";
			cout<<"ingrese su opcion \n";
			cin>>opcion;
		switch (opcion)
				{
				case 1:
						suma();
						break;
				case 2:
						
   						par_impar();	   
						break;
				case 3:
						caracter();
					    break;
				case 4:
				case 5:	
				case 6:
						mensaje();
						cout<<"\n";
						mensaje();
						break;
				case 7:
						
						break;
				case 8:
						break;
				case 9:		
						break;					
				default:
						cout<<"Saliendo...";
						break;		
				}		
	}
