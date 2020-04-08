#include <iostream>
#include <math.h>
using namespace std;

void TorresHanoi(int num,char origen,char destino,char aux)
{

	if(num==1)
	{
			cout<<"Mueva el disco "<<num<<" desde "<<origen<<" hasta  "<<destino<<endl;
			
	}
	else
	{
		TorresHanoi(num-1,origen,aux,destino);
	    cout<<"Mueva el disco "<<num<<" desde "<<origen<<" hasta  "<<destino<<endl;
	    TorresHanoi(num-1,aux,destino,origen);
	}
	
}
//1. Mover (N-1) discos de A hasta B
//2. Si es impar entonces ejecuta siempre esta parte primero; si es par ejecuta aux como destino;
//3. Movimiento final (N-1) disco de B hasta C.
int main()
{
		int cant,movs;
		char A,B,C;
		int resultado;
		cout<<"Numero de discos: ";
		cin>>cant;
		resultado = (pow(2,cant)-1);
		TorresHanoi(cant,'A','C','B');
		cout<<"La cantidad minima de movimientos es: "<<resultado<<endl;
		return 0;
		
}
