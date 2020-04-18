#include <iostream>
using namespace std;
int main(){
    bool T= true;
    char x,y;
    y='V';
    while(T) {
        cin>>x;
        if(x=='#'){
            break;
        }
        if(x=='F'){
            y='F';
        }
    }
cout<<y;
return 0;
}
