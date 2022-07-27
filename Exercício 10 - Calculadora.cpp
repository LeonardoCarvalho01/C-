#include <iostream>
using namespace std;
main()
{
	float num1, num2, resultado, opa, op;
	
	cout<<"\t \t \t=============================="<<endl;
	cout<<"\t \t \t=========CALCULADORA=========="<<endl;
	cout<<"\t \t \t=============================="<<endl;
	
	cout<<"\n Insira um numero"<<endl;
	
	cin>>num1;
	
	cout<<"\n Insira um segundo numero"<<endl;
	
	cin>>num2;
	
	cout<<"\n 1.Subtracao \n 2.Adicao \n 3.Divisao \n 4.Multiplicacao \n"<<endl;
	
	cin>>op;
	
	if (op==1)
	{
	
	resultado=num1-num2;
	
	cout<<"O resultado da sua subtração e de -------> "<<resultado;
	}
	
	else if (op==2)
	{
		
	resultado=num1+num2;
	
	cout<<"O resultado da sua adicao e de -------> "<<resultado;
	}
	else if (op==3)
	{

	resultado=num1/num2;
	
	cout<<"O resultado da sua divisao e de ------> "<<resultado;
	}

	else if (op==4)
	{
	resultado=num1*num2;
	
	cout<<"O resultado da sua multiplicacao e de -------> "<<resultado;
}
	else 
	{

	cout<<"\t \t \t ERRO ERRO ERRO"<<endl;
}

}



/* 
if (opp==1) result = n1 + n2;
else if (op==2) result = n1 - n2;
else if (op==3) result = n1 * n2;
else if (op==4) result = n1 / n2;
else cout<<"Opção nao valida";

if ((op==1) || (op==2) || (op==3) || (op==4)) // evita a output de resultado fora da 
cout<<"Resultado = " << result;*/






