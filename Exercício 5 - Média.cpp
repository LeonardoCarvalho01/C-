/*Curso Profissional

Exercício 5 - Média de 3 notas*/

#include<iostream> // Num1+Num2+Num3/3

#include<iomanip> // Duas casas decimais

using namespace std; // Paresentar média 

main()
{
	float num1, num2, num3, num4, num5, media;
	cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
	
	cout<<"@@@@@@@@@@@@ MEDIA @@@@@@@@@@@@@"<<endl;
	
	cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
	
	cout<<"Insira a nota do primeiro teste"<<endl;
	
	cin>>num1;
	
	cout<<"Insira a nota do segundo teste"<<endl;
	
	cin>>num2;
	
	cout<<"Insira a nota do terceiro teste"<<endl;
	
	cin>>num3;
	
	cout<<"Insira a nota do quarto teste"<<endl;
	
	cin>>num4;
	
	cout<<"Insira a nota do quinto teste"<<endl;
	
	cin>>num5;
	
	media=(num1+num2+num3+num4+num5)/5;
	
	cout<<"A media total das notas e: "<<num1<< "+"<<num2<<"+"<<num3<<"+"<<num4<<"+"<<num5<<"= "<<media;
	
	cin.get();
	cin.get();
}
