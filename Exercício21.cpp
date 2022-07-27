/* O PROGRAMA A PEDIR AO UTILIZADOR O NUMERO DE CENOURAS , FAZ A VERIFICAÇÃO EM FUNÇÃO DA PRIMEIRA ENTRADA 
PODER SER 0, SE FOR 0 NÃO ME DERAM CENOURAS , SE LHE DEREM UMA CENOURA ELE MANIFESTA DESAGRADO , DANDO LHE MAIS ELE GOSTA MUITOOOOOOOOOO E VAI DIZENDO O MESMO */



#include<iostream>
#include<clocale>
using namespace std;

main()
{ 
	int cenouras;
	
	cout<<"olaaa, eu sou um coelhinho e tenho fome :( "<<endl;
	cout<<"Quantas cenouras me podes dar amigo ---> "<<endl;
	cin>>cenouras;
	
		if (cenouras==0) 
		{
			cout<<"\n \n Nem uma cenoura me das ? .                      "<<endl;
			
		}
		else if (cenouras ==1) {
			
			cout<<"\n \n Soooo uma cenoura -.- :( "<<endl;
			
	}
		else 
		{
			do{
				cout<<"\n \n CRUNCH ... CRUNCH ... CRUNCH ..."<<endl;
	
					cenouras--;
		
				cout<<"\n \n Resta apenas " <<cenouras<< " cenouras ."<<endl;
			
					system("pause");
			}
		
			while (cenouras != 1 );
	
				cout<<"\n \n Ja nao tenho fome amigooo, muito obrigado ! "<<endl;
		}
}
