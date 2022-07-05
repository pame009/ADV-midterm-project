#include <iostream>
#include "node.h"
using namespace std;


class Queue {
	NodePtr headPtr,tailPtr;
	int size;
public:
   void enqueue(int x,string n);
   int dequeue();
   Queue();
   ~Queue(); // dequeue all
};

Queue::Queue(){
  size=0;
  headPtr=NULL;
  tailPtr=NULL;
}

Queue::~Queue(){
  /*basically dequeue all*/
  int i;
  for(i=0;i<size;i++) dequeue();
}


void Queue::enqueue(int x,string n){
  NodePtr new_node= new NODE(x,n);
if(new_node){ 
    /* Add head and tail for me please */

  /* 1. connect & Change tail
  2. (may be) change head  when the queue is empty
*/
  if(!headPtr) headPtr=new_node; //if no node
   else tailPtr->set_next(new_node); //set next tail
   tailPtr=new_node; //always change
  
  /*3. increase size*/
	 size++;
  
  cout<<"enqueue "<<n<<"  "<<size<<endl;
 }
}
int Queue::dequeue(){
  if(headPtr!=NULL){ //if not empty
     NodePtr t=headPtr;
     int value = t->get_value();
    //1. move head away --> to the next one****** 
    headPtr = headPtr->get_next(); //t->get_next();
    //2. Only for the last node -->change tail
    if(size==1) {/* headPtr==NULL or  !headPtr*/
        tailPtr=NULL;
      }
     /* Add head and tail for me please */
      size--;    
    cout<<size<<" size de "<<endl;
     delete t;
     return value;
  }
  cout<<"The queue is empty ";
  return -1;
}

