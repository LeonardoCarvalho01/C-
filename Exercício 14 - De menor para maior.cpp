/* Programa que lê 3 numeros e apresentaos por ordem crescente. Cotempla o continuar.*/ 

#include<iostream>

using namespace std;

main()
{

	int num1, num2, num3;
	char cont;
	do {
	
	cout<<"Boas, eu chamo me RP-S11M26 e vou te pedir três numeros para ordena-los do menor para o maior "<<endl; 
	cout<<"\n Insira um primeiro numero ---> ";
			cin>>num1;
		cout<<"Insira um segundo numero diferente do primerio ---> ";
			cin>>num2;
		cout<<"Insira um terceiro numero diferente dos outros dois ---> ";
			cin>>num3;
		
	if (num3>num2 && num2>num1){
	
	
			cout<<"\n \n \n Por ordem crescente "<<num1<<","<<num2<<","<<num3<<".";
}
	else if (num1>num3 && num3>num2){
	

			cout<<"\n \n \n Por ordem crescente "<<num2<<","<<num3<<","<<num1<<".";
}
	else if (num3>num1 && num1>num2){
	
			
			cout<<"\n \n \n Por ordem crescente "<<num2<<","<<num1<<","<<num3<<".";
}
	else if (num1>num2 && num2>num3){
	
						
			cout<<"\n \n \n Por ordem de crescente "<<num3<<","<<num2<<","<<num1<<".";
}
	else if (num2>num1 && num1>num3){
	
			
			cout<<"\n \n \n Por ordem de crescente "<<num3<<","<<num1<<","<<num2<<".";
}
	else if (num2>num3 && num3>num1){
		
			cout<<"\n \n \n Por ordem de crescente "<<num1<<","<<num3<<","<<num2<<".";	
			
}
		cout<<"\n \n \n Gostaria de continuar 'S'/'N'  ?"<<endl;
		cin>>cont;
	}
	while (toupper(cont)=='S');
	
	if ((cont=='n')||(cont=='N'));
		cout<<"\n \n \n ADEUS , foi um prazer jogar contigo !"<<endl;
		
	cin.get();
	
	cin.get();

}
