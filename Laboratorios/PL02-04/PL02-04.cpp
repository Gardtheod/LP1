#include <iostream>
using namespace std;
void p(int cant){
float price=10;
float total=cant*price;
float compra=cant*price, desc;
int candy;
if(cant < 8){
    desc=total*6.5/100;
    total=total-desc;
}else if(cant>=8 && cant<15){
    desc=total*9/100;
    total=total-desc;
}else if(cant>=15){
    desc=total*11.5/100;
    total=total-desc;
}
if (total>380){
    candy=3*cant;
}else{
    candy=2*cant;
}
cout<<"Importe de compra es: "<<compra<<", Descuento es de: "<<desc<<", Importe a pagar es:"<<total<<", Cantidad de caramelos de regalo: "<<candy<<endl;
}
void d(int cant){
float price=7;
float total=cant*price;
float compra=cant*price, desc;
int candy;
if(cant < 8){
    desc=total*6.5/100;
    total=total-desc;
}else if(cant>=8 && cant<15){
    desc=total*9/100;
    total=total-desc;
}else if(cant>=15){
    desc=total*11.5/100;
    total=total-desc;
}
if (total>380){
    candy=3*cant;
}else{
    candy=2*cant;
}
cout<<"Importe de compra es: "<<compra<<", Descuento es de: "<<desc<<", Importe a pagar es:"<<total<<", Cantidad de caramelos de regalo: "<<candy<<endl;
}
void t(int cant){
float price=12.5;
float total=cant*price;
float compra=cant*price, desc;
int candy;
if(cant < 8){
    desc=total*6.5/100;
    total=total-desc;
}else if(cant>=8 && cant<15){
    desc=total*9/100;
    total=total-desc;
}else if(cant>=15){
    desc=total*11.5/100;
    total=total-desc;
}
if (total>380){
    candy=3*cant;
}else{
    candy=2*cant;
}
cout<<"Importe de compra es: "<<compra<<", Descuento es de: "<<desc<<", Importe a pagar es:"<<total<<", Cantidad de caramelos de regalo: "<<candy<<endl;
}


int main(){
int cant;
char ch;
cout<<"Cantidad: "<<endl;
cin>>cant;
cout<<"Chocolate: "<<endl;
cin>>ch;
if (ch=='p'){
    p(cant);
}else if(ch=='d'){
    d(cant);
}else if(ch=='t'){
    t(cant);
}

return 0;
}
