#ifndef stack_h
#define  stack_h
#include "node.h"

class Stack{
private:
	 NodePtr top;
	int size;
public:
    Stack(NodePtr = NULL);
    ~Stack();
    int pop();
    void push(int);
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
void Stack::push(int x){
  NodePtr new_node=new NODE(x);
  if(new_node){
	 	  new_node->set_next(top);
      top=new_node;
     size++;
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
   cout<<"Clearing all stacks"<<endl;
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