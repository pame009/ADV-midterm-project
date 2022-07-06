#include <iostream>
#include <iomanip>
using namespace std;
#ifndef node_h
#define  node_h
//for queue
class NODE{
	 int data;
string Name;
	NODE *nextPtr;
public:
	NODE(int,string);
	~NODE();
  int get_value();
string get_name();

	void set_next(NODE *);
	NODE* get_next();
};
typedef NODE* NodePtr;

NODE::NODE(int x, string n){
	data=x;
  Name=n;
	nextPtr=NULL;
  //cout<<"push: "<<data<<endl;

}
int NODE::get_value(){
	return data;
}
string NODE::get_name(){
	return Name;
}

NODE* NODE::get_next(){
	return nextPtr;
}

void NODE::set_next(NODE *t){
	 nextPtr=t;
}

NODE::~NODE(){
	 cout<<"deleting  " <<data<<"  "<<Name<<endl<<endl;

}


#endif