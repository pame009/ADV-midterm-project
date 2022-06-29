#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

#include"employee.h"
#include"sorting.h"
int x =0;
int main(int argc, char **argv) {
  /*

after compile the file, paste this line to the console:
./main jack 1000 18 jame 2000 22 jim 500 20

  */
  if(argc>1){
    employee *p= new employee[(argc-1)/3]; //use pointer p
    employee a[10];
    p=a;
    int i,c,j,n;
    for(c=0,i=1;i<(argc-1);c++,i+=3){ //get input from argv
    p[c].set_all(argv[i],atoi(argv[i+1]),atoi(argv[i+2]));
      }
    for(c=0,i=1;i<(argc-1);c++,i+=3){ //print all output
    cout<<c+1<<" ";  
    (p+c)->print_all();  
    x=c;
      }
    x+=1;
    
    salarySort(a,x);
    ageSort(a,x);

    int choose;
    cout<<"\n\nIt is lunch time and only employee can enter the cafeteria\n";  
    cout<<"Choose who will enter the queue first:\n";
    cout<<"(0 = end queue):\n";
    
    string arr[10];
    for(c=0;c<x;c++){ //add name queue array
      cout<<(c+1)<<". "<<p[c].getName()<<endl; 
      arr[c]=a[c].getName();
    }
    
    cin>>choose;
    cout<<choose<<endl;


    

  /*
    //outro
    cout<<"Project by:"<<endl;
    developer d1=developer("f1",99999,999,"coding");
    developer d2=developer("f2",0,19,"video");
    developer d3=developer("f3",0,19,"report");
    developer d4=developer("f4",0,19,"report");
  
    d1.print_all();
    d2.print_all();
    d3.print_all();
    d4.print_all();
    
    */

  
  }
  }