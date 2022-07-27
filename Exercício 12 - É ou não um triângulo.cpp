#include<iostream>
using namespace std;
main()
{
	float lado1, lado2, lado3;
	cout<<"Diga um dos lados"<<endl;
	cin>>lado1;
	cout<<"Digite outro lado do triangulo"<<endl;
	cin>>lado2;
	cout<<"Digit o terceiro lado do triangulo"<<endl;
	cin>>lado3;
	
	if ((lado1<lado2+lado3)&&(lado2<lado1+lado3)&&(lado3<lado1+lado2)){
		
				if ((lado1==lado2)&&(lado2==lado3))
					cout<<"O triangulo equilatero"<<endl;
				else if ((lado1==lado2)||(lado2==lado3)||(lado1==lado3))
					cout<<"O triangulo e isosceles"<<endl;
				else cout<<"O triangulo e escaleno"<<endl;	
	}
	else 
		cout<<"nao e um triangulo "<<endl;
		cin.get();
		cin.get();
}

