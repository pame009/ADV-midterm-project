// self-referential structure    
#include <iostream>
#include <iomanip>
using namespace std;

class Node2
{ 
private:
    int value;
    Node2 *nextPtr,*pPtr ;
public:
  Node2(int x=0);
 ~Node2();
  Node2* get_next();
  Node2* get_prev();
  void set_next(Node2* t);
  void set_prev(Node2* t);
  void print();
  int  get_data(){return value;}
};
            
typedef Node2 *Node2Ptr; // synonym for Node2*


Node2::Node2(int x){
  value=x;
  nextPtr=NULL;
  pPtr=NULL;
}

Node2::~Node2(){
		cout<<value<<" deleted"<<endl;
}

Node2Ptr Node2::get_next(){
    return nextPtr;
}

Node2Ptr Node2::get_prev(){
    return pPtr;
}

void Node2::set_next(Node2Ptr t){
    nextPtr=t; 
}

void Node2::set_prev(Node2Ptr t){
    pPtr=t; 
}

void Node2::print(){ 
    cout<<setw(3)<<value; 
}



class LL{
   Node2Ptr hol; //head of linked list
   int size;
  public:
     LL();
     
	  int deletes( int value );
    int isEmpty( );
    void insert(int value );
    void printList( );
    void printListR( );
     ~LL();
};

LL::LL(){
  hol=NULL;
  size=0;
}


LL::~LL(){
  cout<<"deleting all node2s"<<endl;
  Node2Ptr t;
  t=hol;
  int i;
 for(i=0;i<size;i++){
      hol=hol->get_next();
      delete t;
      t=hol;
  } 
  
}


// insert a new value into the list in sorted order
void LL::insert( int value )
{ 
   Node2Ptr newPtr; // pointer to new node2
   Node2Ptr previousPtr; // pointer to previous node2 in list
   Node2Ptr currentPtr; // pointer to current node2 in list

   newPtr =new Node2(value); // create node2 & put value in

   if ( newPtr != NULL ) { // is space available
     
      previousPtr = NULL;
      currentPtr = hol;
      // loop to find the correct location in the list       
      while ( currentPtr != NULL && value > currentPtr->get_data() ) {
         previousPtr = currentPtr; // walk to ...               
         currentPtr = currentPtr->get_next(); // ... next node2 
      } // end while                                         

      // insert new node2 at beginning of list
      if ( previousPtr == NULL ) { 
         newPtr->set_next(hol);
         hol = newPtr;
        if(currentPtr) //first node2 insert
          currentPtr->set_prev(newPtr);
      } // end if
      else { // insert new node2 between previousPtr and currentPtr
         previousPtr->set_next(newPtr);
         newPtr->set_next(currentPtr);

        if(currentPtr) //insert last node2
          currentPtr->set_prev(newPtr);
        newPtr->set_prev(previousPtr);
      } // end else
     ++size;
   } // end if
   else {
      cout<<value <<" not inserted. No memory available."<<endl;
   } // end else
} // end function insert


// delete a list element
int LL::deletes(  int value )
{ 
   Node2Ptr previousPtr; // pointer to previous node2 in list
   Node2Ptr currentPtr; // pointer to current node2 in list
   Node2Ptr tempPtr; // temporary node2 pointer

   // delete first node2
   if ( value == hol->get_data() ) { 
      tempPtr = hol; // hold onto node2 being removed
      hol = hol->get_next(); // de-thread the node2
      size--;  
      delete tempPtr; // free the de-threaded node2

     if(hol) hol->set_prev(NULL);
      return value;
   } // end if
   else { 
      previousPtr = hol;
      currentPtr = hol->get_next();

      // loop to find the correct location in the list
      while ( currentPtr != NULL && currentPtr->get_data() != value ) { 
         previousPtr = currentPtr; // walk to ...  
         currentPtr = currentPtr->get_next(); // ... next node2  
      } // end while

      // delete node2 at currentPtr
      if ( currentPtr != NULL ) { 
         tempPtr = currentPtr;
         previousPtr->set_next(currentPtr->get_next());
        currentPtr=currentPtr->get_next();
        if(currentPtr) currentPtr->set_prev(previousPtr); 
         delete tempPtr ;
         size--;
         return value;
      } // end if
   } // end else

   return '\0';
} // end function delete

// return 1 if the list is empty, 0 otherwise
int LL::isEmpty(  )
{ 
   return hol == NULL;
} // end function isEmpty


// print the list
void LL::printList( )
{ 
  Node2Ptr currentPtr=hol;
   // if list is empty
   if ( size==0) {
      cout<< "List is empty."<<endl;
   } // end if
   else { 
       cout<< "The list is:" <<endl;

      // while not the end of the list
      //while ( currentPtr != NULL ) { 
     int i;
     for(i=0;i<size;i++){
          currentPtr->print() ;
            cout<<"  ->";
         currentPtr = currentPtr->get_next();   
      } // end while

      puts( "NULL\n" );
   } // end else
} // end function printList


void LL::printListR( )
{
 // if list is empty
 if ( isEmpty() ) {
cout<<"List is empty"<<endl;
// end if
} 
  else{
    int i;
    Node2Ptr currentPtr=hol;
    
    for(i=0;i<size-1;i++){ //1. find last node2
      currentPtr=currentPtr->get_next();
    }
    
    for(i=0;i<size;i++){ //2. from last node2 print each node2
      currentPtr->print();
      cout<<"  ->";
      currentPtr=currentPtr->get_prev(); 
      //3. move to prev node2
      }

     }// end else
      puts( "NULL\n" );
} // end function printList