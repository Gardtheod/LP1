#include <iostream>
using namespace std;
/*Dadas dos fechas en el formato día (1 a 31), mes (1 a 12) y año (entero de cuatro dígitos),
correspondientes a la fecha de nacimiento y fecha actual, respectivamente. Crear un programa
que deduzca y visualice la edad del individuo; si es la fecha de un bebé de menos de un año
de edad, la edad se debe dar en meses y días; en caso contrario, en años.*/

void bebe_edad(int dia_1,int dia_2,int mes_1,int mes_2){
    int meses=0,dias=0;
    meses=mes_2-mes_1;
    dias=dia_2-dia_1;
    cout<<"Usted tiene: "<<meses<<" meses y "<<dias<<" dias"<<endl;
}
void normal_edad(int anio_1,int anio_2){
    int anios=0;
    anios=anio_2-anio_1;
    cout<<"Usted tiene: "<<anios<<" anios"<<endl;
}
int main(){
    int dia_1, mes_1, anio_1, mes_2, dia_2, anio_2;
    cout<<"Ingrese la fecha de nacimiento"<<endl;
    cin>>dia_1;
    cin>>mes_1;
    cin>>anio_1;
    cout<<"Ingrese la fecha actual"<<endl;
    cin>>dia_2;
    cin>>mes_2;
    cin>>anio_2;

    if(anio_2-anio_1<1){
        bebe_edad(dia_1,dia_2,mes_1,mes_2);
    }else if(anio_2-anio_1==1){
        cout<<"Usted tiene: 1 anio"<<endl;
    }else{
        normal_edad(anio_1,anio_2);
    }
return 0;
}
