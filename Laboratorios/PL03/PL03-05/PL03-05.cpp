#include <iostream>
using namespace std;
int main() {
int x,y,cont=1;
cin>>x;
cin>>y;
while(y!=x){
    if(y<x){
        cout<<"Mayor"<<endl;
    }else if(x>y){
        cout<<"Menor"<<endl;
    }
    cin>>y;
    cont++;
}
cout<<y<<" "<<cont;
return 0;
}
