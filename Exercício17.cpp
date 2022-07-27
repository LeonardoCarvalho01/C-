
/* Programa que vai fazer a soma de varios valores 
e pedido ao utilizador quantos valores quer somar.
o cout deve dar todos os numeros entrados e a soma final.
Utilize uma variada soma para guardar os valores entrados */ 

#include<iostream>

using namespace std;

main()
{
	int soma , quantos, nums, c=1 ;
	
	cout<<"Quantos numeros deseja somar ---> ";
	
	cin>>quantos;
	
	soma=0;
	
	while ( c <= quantos)
	{

		cout<<" Insira o numero que quer somar ---> ";
		
		cin>>nums;
		
		c++; 
		
		soma = soma + nums;
	}
	cout<<" O resultado da soma e ---> "<< soma;
	
}
