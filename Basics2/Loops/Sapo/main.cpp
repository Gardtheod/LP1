#include <iostream>

using namespace std;

int main()
{
    int distance,increase=1,jumps=0,COUNTER;
    cout << "Ingrese la distancia: " << endl;
    cin>>distance;
    for (COUNTER=0;COUNTER<distance;COUNTER++){
        while(increase<distance){
            increase+=9;
            jumps+=1;
        }
    }
    cout<<" Para alcanzar esta distancia "<<distance<<" se debe dar esta cantidad de saltos:  "<<jumps<<endl;

    return 0;
}
