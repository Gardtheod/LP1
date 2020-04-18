#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <iostream>
using namespace std;
int main() {
int d1,d2,cont=1,RANDOM;
srand(time(NULL));
d1=0;
d2=0;
while(d1!=6 || d2!=6){
    d1=rand() % 6 + 1;
    d2=rand() % 6 + 1;
    cout<<d1<<" "<<d2<<" "<<cont;
    cont++;
    cout<<endl;
}
}
