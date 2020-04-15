#include <iostream>
using namespace std;

/*En una tienda de descuento se efectúa una promoción en la cual se hace un descuento
sobre el valor de la compra total según el color de la bolita que el cliente saque al
pagar en caja. Si la bolita es de color blanco no se le hará descuento alguno, si es
verde se le hará un 20% de descuento, si es morado 35%, si es celeste un 60% y si es
roja un 100%. Determinar la cantidad final que el cliente deberá pagar por su compra,
conociendo el color de la bola obtenida, la cantidad y precio del producto comprado
(se sabe que solo hay bolitas de los colores mencionados)*/

void w(int price,int quant){
    float total=0, desc=0;
    total=price*quant;
    total=total-(desc*total/100);
    cout<<"El precio final es: "<<total<<"$"<<endl;
}
void g(int price,int quant){
    float total=0, desc=20;
    total=price*quant;
    total=total-(desc*total/100);
    cout<<"El precio final es: "<<total<<"$"<<endl;
}
void p(int price,int quant){
    float total=0, desc=35;
    total=price*quant;
    total=total-(desc*total/100);
    cout<<"El precio final es: "<<total<<"$"<<endl;
}
void b(int price,int quant){
    float total=0, desc=60;
    total=price*quant;
    total=total-(desc*total/100);
    cout<<"El precio final es: "<<total<<"$"<<endl;
}
void r(int price,int quant){
    float total=0, desc=100;
    total=price*quant;
    total=total-(desc*total/100);
    cout<<"El precio final es: "<<total<<"$"<<endl;
}

int main (){

char ball;
int quant, price;
cout<<"Color: "<<endl;
cin>>ball;
cout<<"Cantidad: "<<endl;
cin>>quant;
cout<<"Precio: "<<endl;
cin>>price;

if(ball=='w'){
    w(price,quant);
}
if(ball=='g'){
    g(price,quant);
}
if(ball=='p'){
    p(price,quant);
}
if(ball=='b'){
    b(price,quant);
}
if(ball=='r'){
    r(price,quant);
}
return 0;
}

