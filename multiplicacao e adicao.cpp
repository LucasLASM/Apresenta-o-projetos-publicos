#include <IOSTREAM>

using namespace std;

int opcao (int op);
int multiplicar (int a, int b);
int somar (int a, int b);
int a,b,Resultado,op;


int main (){
setlocale(LC_ALL, "ptb");

cout<<"Que Opera��o Deseja Realizar?\n";
cout<<"Para Soma 1\n para Multiplica��o 2\n";
cin>>op;
opcao (op);
 return 0;
}

int somar (int a, int b){
return a + b;
}

int multiplicar (int a, int b){
return a * b;
}

int opcao (int op){

	switch (op)
	{
		
		case 1:	
	cout<<"Digite O Primeiro N�mero:";
	cin>>a;
    cout<<"Digite O Segundo N�mero:";
	cin>>b;
    Resultado = somar (a,b);
	cout<<"O Resultado �:"<<Resultado;
	
	break;
	
        	case 2:	
	cout<<"Digite O Primeiro N�mero:";
	cin>>a;
    cout<<"Digite O Segundo N�mero:";
	cin>>b;
    Resultado = multiplicar (a,b);
	cout<<"O Resultado �:"<<Resultado;
	
	}
	
	
}

 
























