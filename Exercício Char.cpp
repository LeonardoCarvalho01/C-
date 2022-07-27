#include<iostream>
using namespace std;
main()
{
	int num1, num2, result;
	char op;
	cout<<"Digite um numero"<<endl;
	cin>>num1;
	cout<<"Digite um segundo numero"<<endl;
	cin>>num2;
	cout<<"Selecione a operação (* ,/ ,- ,+) "<<endl;
	cin>>op;
	
	switch (op) {

	case '-': result = num1 - num2;break;
	case '+': result = num1 + num2;break;
	case '/': result = num1 / num2;break;
	case '*': result = num1 * num2;break;

	default : cout<<"O resultado está inválido"<<endl;
	}
	
	if ((op=='-') || (op=='+') || (op=='/') || (op=='*')) // evita a output de resultado fora da 
cout<<"Resultado = " << result;

}

