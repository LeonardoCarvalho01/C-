#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

main()
{
	int numsecreto=0, num=0;
	char cont;
	do{
		
	
	cout<<"Boas, eu sou o Pedro e estou a pensar num nuemro quer adivinhar?"<<endl;
	
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
		cout<<"Gostaria de continuar s/n ?"<<endl;
		cin>>cont;
	
	
	}
	while (toupper(cont)=='S');
	
	if ((cont=='n')||(cont=='N'));
		cout<<"ADEUS , foi um prazer jogar contigo !"<<endl;
		
	cin.get();
	cin.get();
			
}
