#include<iostream>
#include<clocale>
using namespace std;

main()
{
	int cenouras;
	
	cout<<"olaaa, eu sou um coelhinho e tenho fome :( "<<endl;
	cout<<"Quantas cenouras me podes dar amigo ---> "<<endl;
	cin>>cenouras;
	do{

	cout<<"\n \n CRUNCH ... CRUNCH ... CRUNCH ..."<<endl;
	
	cenouras--;
	
		if (cenouras==0) 
		{
			cout<<"\n \n Ja nao tenho mais cenouras .                      "<<endl;
				system("pause");
		}
		else {
		
			cout<<"\n \n Restao apenas " <<cenouras<<" cenouras .          "<<endl;
			system("pause");
		}
}
	while (cenouras != 0 );
		cout<<"\n \n Ja nao tenho fome amigooo ! "<<endl; 
}
