#include <string>
#include <iostream>
using namespace std;
struct Link{
	string value;
	Link* prev;
	Link* succ;
	Link( const string& v, Link* p = 0, Link* s = 0): value(v), prev(p), succ(s){ }
};

Link* insert(Link* p, Link* n){
	n->succ=p;
	p->prev->succ=n;
	n->prev=p->prev;
	p->prev =n;
	return n;
}

int main()
{
	
	Link* norse_gods = new Link("Thor",0,0);
	norse_gods = new Link("Odin", norse_gods, 0 );
	norse_gods->prev->succ = norse_gods;
	norse_gods = new Link("Freya", norse_gods, 0);
	norse_gods->prev->succ = norse_gods;
	cout<<norse_gods;
}
