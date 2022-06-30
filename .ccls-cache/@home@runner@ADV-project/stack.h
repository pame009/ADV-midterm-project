#ifndef stack_h
#define  stack_h
#include <iostream>
using namespace std;

#include "node.h"

class Stack{
private:
	 NodePtr top;
	int size;
public:
    Stack(NodePtr = NULL);
    ~Stack();
    int pop();
    void push(int x,string n, string e);
};

Stack::Stack(NodePtr t){
  if(t) {
    top=t;
    size=1;
  }
 else{
   top=NULL;
	 size=0;
   }
}
void Stack::push(int x,string n, string e){
  NodePtr new_node=new NODE(x,n,e);
  if(new_node){
	 	  new_node->set_next(top);
      top=new_node;
     size++;
    //cout<<x<<n<<e<<endl; //print all variable that push in
   }
 else cout<<"No memory left for new nodes"<<endl;
		 // Left missing for exercises…
}
int Stack::pop(){
 	   NodePtr t=top;
		int value;		
	 if(t)	{
    top=top->get_next();
     value=t->get_value();
	// Left missing for exercises
     delete t;
     size--;
     return value;
     }
    
		cout<<"Empty stack"<<endl;
   return 0;
	}
Stack::~Stack(){
   cout<<"\nClearing all stacks"<<endl;
  	int i;
  NodePtr t=top;
  for(i=0;i<size;i++){
      t=top;
      top=top->get_next();
      delete t;
           	// Left missing for exercises
  }


}



#endif