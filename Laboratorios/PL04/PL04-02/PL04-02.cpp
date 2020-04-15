#include <iostream>
using namespace std;

int main(){
   char z;
   z='X' ;
   char &ref=z;
   ref='W';
   cout<<"El valor de z es: "<<z<<endl;

return 0;
}
