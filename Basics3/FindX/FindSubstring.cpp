#include <iostream>
#include <cstring>
using namespace std;
//Escribe una funcion char* findx(const char* s, const char* x) que encuentre la primera ocurrencia de x en s.
char* findx(const char* text, int ln ,char* find)
{
int i=0,position=0,cd=0;
bool band=false;
for(int i=0;text[i]!='\0';i++){
	if(ln==2){
		if(text[i]==find[0]){
			if(text[i+1]==find[1]){
				band=true;
				position=i;
			}
		}
	}else if(ln==3){
		if(text[i]==find[0]){
			if(text[i+1]==find[1]){
				if(text[i+2]==find[2]){
					band=true;
					position=i;
				}
			}
	}
	}else if(ln==4){
		if(text[i]==find[0]){
			if(text[i+1]==find[1]){
				if(text[i+2]==find[2]){
					if(text[i+3]==find[3]){
						band=true;
						position=i;
					}					
				}
			}
	   }
	}
}
if(band==true){
	cout<<"La palabra "<< find << " fue encontrada en la posicion " << position << endl;
}else{
	cout<<"La palabra no fue encontrada ";
}
}





int main(){

int lenght,nsearch;
char* list=new char[50];
char* search= new char;

cout<<"Escribir frase: "<<endl;
gets(list);

lenght=strlen(list);

cout<<"Que desea buscar: "<<endl;
gets(search);
nsearch=strlen(search);

findx(list, nsearch ,search);

delete[] list;
delete[] search;
return 0;
}
