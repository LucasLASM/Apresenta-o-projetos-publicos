#include <IOSTREAM>

using namespace std;

int opcao (int op);
int multiplicar (int a, int b);
int somar (int a, int b);
int a,b,Resultado,op;


int main (){
setlocale(LC_ALL, "ptb");

cout<<"Que Operação Deseja Realizar?\n";
cout<<"Para Soma 1\n para Multiplicação 2\n";
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
	cout<<"Digite O Primeiro Número:";
	cin>>a;
    cout<<"Digite O Segundo Número:";
	cin>>b;
    Resultado = somar (a,b);
	cout<<"O Resultado é:"<<Resultado;
	
	break;
	
        	case 2:	
	cout<<"Digite O Primeiro Número:";
	cin>>a;
    cout<<"Digite O Segundo Número:";
	cin>>b;
    Resultado = multiplicar (a,b);
	cout<<"O Resultado é:"<<Resultado;
	
	}
	
	
}

 
























