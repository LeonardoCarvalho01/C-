/*Curso Profissional

Exercicio 7 - Notas */ 

#include<iostream>
using namespace std;
main(){

int nota;

cout<<"Digite a nota: ";

cin>>nota;

if (nota<0) 

cout<<"Nota nao e válida!";

else if (nota<10)

cout<<"Reprovado";

else if (nota<14)

cout<<"Suficiente";

else if (nota<18)

cout<<"Bom";

else if(nota<=20)

cout<<"Muito Bom";

else cout <<"Nota nao e valida!";

}
