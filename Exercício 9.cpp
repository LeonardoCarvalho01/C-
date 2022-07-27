#include <iostream>
using namespace std;
main()
{
	int num1, num2, num3;
	
	cout<<"Insira um numero"<<endl;
	
	cin>>num1;
	
	cout<<"Insira um numero diferente do primeiro"<<endl;
	
	cin>>num2;
	
	cout<<"Insira um numero diferente do primeiro do segundo"<<endl;
	
	cin>>num3;
	
	if (num1>num2)
	
	{
		if (num1>num3)

				cout<<"O maior numero e: "<<num1;
	}
	else if (num2>num3)
	
		cout<<"O maior numero e: "<<num2;
		
	else 
		
		cout<<"O maior numero e: "<<num3;
}


