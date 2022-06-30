#include <iostream>
#include <iomanip>
using namespace std;
#ifndef node_h
#define  node_h

class NODE{
	 int data;
string Name;
string Extra;
	NODE *nextPtr;
public:
	NODE(int,string,string);
	~NODE();
  int get_value();
string get_name();
string get_extra();

	void set_next(NODE *);
	NODE* get_next();
};
typedef NODE* NodePtr;

NODE::NODE(int x, string n, string e){
	data=x;
  Name=n;
  Extra=e;
	nextPtr=NULL;
  //cout<<"push: "<<data<<endl;

}
int NODE::get_value(){
	return data;
}
string NODE::get_name(){
	return Name;
}
string NODE::get_extra(){
	return Extra;
}


NODE* NODE::get_next(){
	return nextPtr;
}

void NODE::set_next(NODE *t){
	 nextPtr=t;
}

NODE::~NODE(){
	 cout<<"deleting  " <<data<<"  "<<Name<<endl;

}


#endif