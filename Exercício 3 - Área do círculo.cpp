/*Curso Profissional

Exerc�cio 3 - �rea do c�rculo*/

#include<iostream> // Pi*raio*raio

#include<iomanip> // 3 algarismos 

using namespace std; // Escrever �rea do c�rculo

main()
{
	float Raio, total;
	
	cout<<"Diga o raio do Circulo ?"<<endl;
	
	cin>>Raio;
	
	const float Pi=3.1415;
	
	total=Pi*(Raio*Raio);
	
	cout<<"A area do circulo e: "<<setprecision(3)<<total;
	
}
