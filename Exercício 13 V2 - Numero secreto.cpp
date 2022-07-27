#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

main()
{
	int num, utilizador;
	srand (time(NULL));
	
		num = rand() % 10+1;
	
		cout<<"Inisra um numero"<<endl;
		
		cin>>num;
		
	if (num==utilizador)
		
		cout<<"Acertaste !"<<endl;
		
	else if (num>utilizador){
	
	
		cout<<"Nao acertou !"<<endl;
		
		cout<<"O numero para acertares e maior "<<endl;
		
	}
	else {
	
		cout<<"Nao acertou !"<<endl;
		
		cout<<"O numero para acertares e mais pequeno"<<endl;
	}
	}
