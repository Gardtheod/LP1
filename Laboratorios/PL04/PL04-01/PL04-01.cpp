#include <iostream>
using namespace std;

int main(){
    float x;
    x=100.5;
    float *ptr;
    ptr=&x;
    cout<<"La direccion de memoria del puntero es:"<<ptr<<endl;
    cout<<"El puntero ptr es:"<<*ptr<<endl;
    *ptr=5.5;
    cout<<"El valor de x es:"<<x<<endl;
return 0;
}
