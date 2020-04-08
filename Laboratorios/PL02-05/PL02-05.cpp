#include <iostream>
#include <string>
using namespace std;

void A4(int der,int izq,int inf, int sup){
/*210 x 297 mm*/
float width=21;
float height=29.7;
float base;
float altura;
float area;
base=width-(der+izq);
altura=height-(inf+sup);
area=base*altura;
cout<<"El area imprimible es de: "<<area<<" cm2."<<endl;
}
void A5(int der,int izq,int inf, int sup){
/*148 x 210 mm*/
float width=14.8;
float height=21;
float base;
float altura;
float area;
base=width-(der+izq);
altura=height-(inf+sup);
area=base*altura;
cout<<"El area imprimible es de: "<<area<<" cm2."<<endl;
}
void Carta(int der,int izq,int inf, int sup){
/*216 x 279 mm*/
float width=21.6;
float height=27.9;
float base;
float altura;
float area;
base=width-(der+izq);
altura=height-(inf+sup);
area=base*altura;
cout<<"El area imprimible es de: "<<area<<" cm2."<<endl;
}
void Ejecutivo(int der,int izq,int inf, int sup){
/*177.8 x 254 mm*/
float width=17.8;
float height=25.4;
float base;
float altura;
float area;
base=width-(der+izq);
altura=height-(inf+sup);
area=base*altura;
cout<<"El area imprimible es de: "<<area<<" cm2."<<endl;
}
void MediaCarta(int der,int izq,int inf, int sup){
/*140 x 216 mm*/
float width=14;
float height=21.6;
float base;
float altura;
float area;
base=width-(der+izq);
altura=height-(inf+sup);
area=base*altura;
cout<<"El area imprimible es de: "<<area<<" cm2."<<endl;
}



int main(){
string papel;
float izq,der,sup,inf;
cout<<"Tipo de papel: ";
cin>>papel;
cout<<"Margen Superior en cm:";
cin>>sup;
cout<<"Margen Inferior en cm: ";
cin>>inf;
cout<<"Margen Izquierdo en cm: ";
cin>>izq;
cout<<"Margen Derecho en cm: ";
cin>>der;

if(papel=="MediaCarta"){
    MediaCarta(der,izq,inf,sup);
}else if(papel=="Ejecutivo"){
    Ejecutivo(der,izq,inf,sup);
}else if(papel=="Carta"){
    Carta(der,izq,inf,sup);
}else if(papel=="A4"){
    A4(der,izq,inf,sup);
}else if(papel=="A5"){
    A5(der,izq,inf,sup);
}

return 0;
}
