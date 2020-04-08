#include <iostream>
using namespace std;

int main(){
    int total_money=0, lucas_money=0, josue_money=0, elsa_money=0, david_money=0;
    cout<<"Ingrese el dinero que repartira el padre: "<<endl;
    cin>>total_money;
    josue_money=total_money *35/100;
    lucas_money=josue_money * 60/100;
    elsa_money=(josue_money+lucas_money)*45/100;
    david_money=total_money-(josue_money+lucas_money+elsa_money);
    cout<<"La cantidad que recibe Lucas es: "<<lucas_money<<endl;
    cout<<"La cantidad que recibe Josue es: "<<josue_money<<endl;
    cout<<"La cantidad que recibe Elsa es: "<<elsa_money<<endl;
    cout<<"La cantidad que recibe David es: "<<david_money<<endl;
return 0;
}
