#include <iostream>

using namespace std;

int main()
{
    int DIG,pincel=3;
    bool Posible;
    cout << "Ingrese la cantidad de digitos: " << endl;
    cin>>DIG;
    int Lienzo[DIG];
    for (int i = 0;i<DIG;i++){
        cout<<i+1<<". Ingrese los numeros: ";
        cin>>Lienzo[i];
   }
    for (int i=0;i<DIG;i++){
        if(Lienzo[i]==Lienzo[i+1]&&Lienzo[i]==Lienzo[i+2]){
            Posible=true;
            break;
        }else{
            Posible=false;
        }
    }
    if (Posible){
        cout << "Es posible" << endl;
    }else{
        cout << "No es posible " << endl;
    }

    return 0;

}
