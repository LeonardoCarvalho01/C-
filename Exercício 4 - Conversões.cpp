/*Curso Profissional 

Exercício 4 - Fahreneits para Celcius*/

#include<iostream> // Celcius=5/9*(Fahreneits-32)

#include<iomanip> // Uma casa deciaml

using namespace std; // Escrever graus Celcius

main()
{	
	cout<<"===========FAHRENEITS--------->CELCIUS============ \n"<<endl;
	
	cout<<"=================================================="<<endl;
	
	float celcius, fahreneits;
		
	cout<<"Diga quantos Fahreneits ?"<<endl;
	
	cin>>fahreneits;
	
	celcius=5.0/9.0*(fahreneits-32);
	
	cout<<"Os graus em celcius sao: "<<fixed<<setprecision(1)<<celcius; 
	
}
