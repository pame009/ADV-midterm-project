#include <iostream>
#include <string.h>
#include <iomanip>

#include"employee.h"
#include"sorting.h"
#include"node.h"
#include"stack.h"
#include"queue.h"

using namespace std;
int x = 0; //global employee size
int main(int argc, char **argv) {
  /*

after compile the file, paste this line to the console:
./main jack 1000 17 jame 2000 61 jim 500 20 John 5000 25

link to github:
https://github.com/pame009/ADV-midterm-project
  */
  
  if(argc>1){ //make program not run without input argc/argv
    int i,c,j,n;
    employee *p= new employee[(argc-1)/3]; //use pointer p
    employee a[20];
    p=a;
    for(c=0,i=1;i<(argc-1);c++,i+=3){ //get input from argv
      p[c].set_all(argv[i],atoi(argv[i+1]),atoi(argv[i+2]));
      }
    for(c=0,i=1;i<(argc-1);c++,i+=3){ //print all output
      cout<<c+1<<" ";  
      (p+c)->print_all();  
      x=c;
      }
      x+=1;
      //cout<<x<<endl;

    //sorting.h function
    salarySort(a,x);
    ageSort(a,x);

    cout<<"\n\nIt is lunch time and only employee can enter the cafeteria\n";      
    cout<<"(0 = dequeue)\n";
    cout<<"(99 = end queue)\n";
    cout<<"Choose who will enter the queue first:\n";
    
    Queue q; //for queue function
    int choice=-1; // user's choice
    // loop while user does not choose 99
    while (true) { 
    cout<< "? ";
    cin>>choice;
     if(choice==99){ //break loop
       cout<<"\nend queue"<<endl;
       while(q.dequeue()!=-1){ //dequeue all
         q.dequeue();
       }
       break; 
       }
     if(choice==0){ //dequeue
       q.dequeue();
     } else if (choice > x){ // if input exceed size
       cout<<"plese choose the correct number!"<<endl;
       }
       else if (q.check(choice)){ //check duplicate input function
         cout<<endl<<a[choice-1].getName()<<" is already in queue"<<endl;
         }
         else { // queue int with name employee name
           q.enqueue(choice,a[choice-1].getName());
           }
      q.printQueue(); //print current queue
      } //end while loop
    //outro

    
    cout<<"\n\nProject by:"<<endl;
    int dev=5;
    developer d[dev];
    d[1].set("Pongpom","coding");
    d[2].set("Rapeepat","video");
    d[3].set("Jianen","report");
    d[4].set("Chonlasup","report");

    cout<<"(using stack)"<<endl;
    Stack s;
    for(i=1;i<dev;i++){ //push stack loop FILO
      d[i].print_all();
      s.push(i,d[i].getName());   // auto pop(destruct) LIFO at the end loop
     }
  }
  }