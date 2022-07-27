#include<iostream>
using namespace std;
main()
{
	int num1, num2, result, op;
	cout<<"Digite um numero"<<endl;
	cin>>num1;
	cout<<"Digite um segundo numero"<<endl;
	cin>>num2;
	cout<<"1. Subtração 2. Adicao 3. Divisao 4. Multiplicacao"<<endl;
	cin>>op;
	
	switch (op) {

	case 1 : result = num1 - num2;break;
	case 2 : result = num1 + num2;break;
	case 3 : result = num1 / num2;break;
	case 4 : result = num1 * num2;break;

	default : cout<<"O resultado está inválido"<<endl;
	}
	
	if ((op==1) || (op==2) || (op==3) || (op==4)) // evita a output de resultado fora da 
cout<<"Resultado = " << result;

}
