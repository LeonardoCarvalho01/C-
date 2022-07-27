/*Curso Profissional

Exercício 6 - Se é par ou impar */

#include<iostream> // resto=num%2

using namespace std; // O numero ou é par ou impar

main()
{
	int num, par, resto, impar;
	
	cout<<"Digite um numero para descobrir de e para ou impar"<<endl;
	
	cin>>num;
	
	resto=num%2;

	if (resto == 0)
	
	cout<<"O numero e par "<<endl;
	
	else 
	
	cout<<"O numero e impar "<<endl;
	
}
