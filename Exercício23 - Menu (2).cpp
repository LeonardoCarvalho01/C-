#include<iostream>
using namespace std;
main(){
	int multiplos, primos, sair;
	char op;
	
	cout<<"\t \t \t **************************************";
	cout<<" \n \n \t \t \n \t                  ----------------------------------";
	cout<<" \n \n \n \t \t \t   -------------------------------";
	cout<<"  \t \t \t  \n \n \n                                      MENU                ";
	cout<<"\n \n \n \t \t \t Multiplos:     M";
	cout<<"\n \n \n  \t \t \t Primos:        P ";
	cout<<"\n \n \n \t \t \t Sair:       	S ";
	cout<<"\n \n \n \t \t \t --------------------------------------";
	cout<<"\n \n \n \t \t \t O que desejas ? ";
	cin>>op;
	switch (op)
	
	{
		case 'M' : cout<<"Faz multiplos ... "<<endl;break; 
		case 'P' : cout<<"Diga os primos ..."<<endl;break;
		case 'S' : cout<<"              \n                         Adeus ! "<<endl;break;
	}
	cin.get();
}
