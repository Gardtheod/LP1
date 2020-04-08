#include <iostream>
using namespace std;

int main() 
{ 
int var = 17; 
int * ptr = &var ; // ptr guarda la direccion de var 
char ch = 'c'; 
char * pc = &ch; // puntero a char 
int ii = 17; 
int * pi =&ii; //puntero a entero 
cout << "pc==" << pc 
<< "; contenido de pc==" << *pc << "\n"; 
cout << "pi==" << pi 
<< "; contenido de pi==" << * pi << "\n"; 

}
