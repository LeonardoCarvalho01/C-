/* Programa que permite somar vários valores a introduzir pelo utilizador.
O ciclo so termina quando for introduzido o valor 0*/ 

#include<iostream>
#include<clocale>
using namespace std;

main()
{
	int num, resultado;
	num=0;
	
	resultado=0;
	do{
	
		cout<<"Insira o valor que quer somar, quando acabar de somar numeros insira um 0 para dar a soma de todos os valores "<<endl;
			cin>>num;
	resultado=resultado+num;
	}
	
	while (num != 0);
		
		cout<<"O resultado e: "<<resultado<<endl;
	
	
}
