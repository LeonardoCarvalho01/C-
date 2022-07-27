#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

main()
{

	int num, numsecreto;
	srand (time(NULL));
	
		numsecreto = rand() % 10+1;

	do 
	{
	
		cout<<"Inisra um numero"<<endl;
		
		cin>>num;

	if (num==numsecreto)
		
		cout<<"Acertaste !"<<endl;

	else if (num<numsecreto){
	
	
		cout<<"Nao acertou !"<<endl;
		
		cout<<"O numero para acertares e maior "<<endl;
		
	}
	else {
	
		cout<<"Nao acertou !"<<endl;
		
		cout<<"O numero para acertares e mais pequeno"<<endl;
	}
	
	}
		while (num!=numsecreto);
	}
	

