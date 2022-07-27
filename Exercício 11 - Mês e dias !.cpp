#include<iostream>
using namespace std;
main()
{
	int mes, dias;
	cout<<"Digite o mes para saber os dias (1-12)"<<endl;
	cin>>mes;
	
	switch (mes){
		
		case 1 : 
		case 3 : 
		case 5 : 
		case 7 : 
		case 8 : 
		case 10 : 
		case 12 : cout<<"O mes tem 31 dias ! :D "<<endl;break;
		case 2 : cout<<" O mes ou tem 28 ou 29 dias ! :S"<<endl;break;
		case 4 : 
		case 6 :
		case 9 :
		case 11 : cout<<"o mes tem 30 dias ! :D "<<endl;break;
		
		default : cout<<"O resultado e invalido :( "<<endl;break;
		
	}
}
