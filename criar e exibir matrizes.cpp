 #include <iostream>
#include <locale>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "ptb");
int lin,col,aux,M1[2][2],M2[2][2];




for (lin=0;lin<=1;lin++)




{
	
	
	for (col=0;col<=1;col++);
	
	
	
	{
	cout << "informe o elemento ["<<lin+1<<","<<col+1<<"] da matriz 1:  ";
	cin >> M1[lin][col];
		cout << "informe o elemento ["<<lin+1<<","<<col+1<<"] da matriz 2:  ";
		cin >> M2[lin][col];
		if (lin==col)
		{
			aux=M1[lin][col];
			M1[lin][col]=M2[lin][col];
			M2[lin][col]=aux;
		}
		
		
	}
}

	for (lin=0;lin<=1;lin++)
	
	{
		cout << "elemento ["<<lin+1<<","<<lin+1<<"] da matrix 1:  "<<M1[lin][col]<<"\n";
	cout << "elemento ["<<lin+1<<","<<lin+1<<"] da matrix 2:  "<<M2[lin][col]<<"\n";	
	}
}


