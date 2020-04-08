#include <iostream>
using namespace std;

int main(){
    int cantidad,igual=0,sospechosos=0;
    bool located = false;
    cout<<"Digite el numero de elementos: ";
    cin>>cantidad;
    int serie [cantidad];
    for (int i = 0;i<cantidad;i++){
        cout<<i+1<<". Ingrese los numeros: ";
        cin>>serie[i];
     }
     for (int i=0;i<cantidad-1;i++){
        if(serie[i]!=serie[i+1]){
            if(located) {
                sospechosos += 1;
            }else{
                located = true;
                sospechosos += 2;//1223
            }
        }
        else{
            located = false;
        }
     }
    cout<<" Existen "<<sospechosos<<" sospechosos. "<<endl;


}
