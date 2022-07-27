#include<iostream>
using namespace std;
main()
{
	int multiplos=0, c=0, primos, sair,num=0;
	char op;
	bool continuar=true;
	do
	{
		system("cls");
		cout<<"\t \t \t **************************************";
		cout<<" \n \n \t \t \n \t                  ----------------------------------";
		cout<<" \n \n \n \t \t \t   -------------------------------";
		cout<<"  \t \t \t  \n \n \n                                      MENU                ";
		cout<<"\n \n \n \t \t \t Multiplos:     M";
		cout<<"\n \n \n  \t \t \t Tabuada:        P ";
		cout<<"\n \n \n \t \t \t Sair:       	S ";
		cout<<"\n \n \n \t \t \t --------------------------------------";
		cout<<"\n \n \n \t \t \t O que desejas ? ";
			cin>>op;
	
	
	
	switch (toupper(op))
	
	{
	
		
		case 'M' : cout<<"Faz multiplos ... "<<endl;
		
			cout<<"Insira o número que deseja para inserir os multiplos do mesmo -------> "<<endl;
			cin>>num;
		do
		{
			cout<<"\n O multiplo de "<<num<< "é "<<multiplos;
			multiplos=multiplos+num;
			c++;	
			
		}
			while(c<6);	
			system("pause");
				break; 
		{
		
		case 'P' : cout<<"Diga os primos ..."<<endl;
		
		system("pause");
		
		break;
		
		case 'S' : cout<<"              \n                         Adeus ! "<<endl;
		
			continuar=false;
			
			break;
			
		system("pause");
	}
}
			
}
while (continuar == true);
	
				cin.get();
}


