#include <iostream>
#include <vector>>
using namespace std;

int main()
{
	cout << "el tam de char es: " << sizeof ('a') << '\n'; 
	cout << "el tam de char es: " << sizeof (2+2) << '\n'; 
	int * p = 0; 
	cout << "el tam de int * es: " << sizeof (p) << '\n'; 
	vector <int > v(1000); 
	cout << "el tam de vector<int >(1000) is " <<sizeof(v)<< '\n'; 

}
