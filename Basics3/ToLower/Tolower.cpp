#include <iostream>
#include <cstring>
using namespace std; 

void to_lower(char* newtext,int num){
	int aux;
	for (int i=0; i<=num; i++){
		
		if(newtext[i]!=' ' ){
			aux=newtext[i]+32;
			newtext[i]=aux;
		}else{
			aux=newtext[i];
			newtext[i]=aux;
		}
		cout<<newtext[i];
	}
	
}

int main(){
	
	int lenght, count=0;
	char* list=new char[50];
	cout<<"Escribir frase: "<<endl;
	gets(list);
	lenght=strlen(list);
	to_lower(list, lenght);
	
	delete[] list;
	
	return 0;
}
