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
./main jack 1000 20 ming 2000 100 f 1 5 a 5 1

  */
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

  
  int arr[10];
  for(c=0;c<=x;c++){ //add salary array
  //cout<<p[c].getSalary()<<endl; 
  arr[c]=p[c].getSalary();
    }
  x+=1;
  cout<<"\nSalary Sort\n"; //bubble salary sort
    for (i = 0; i < x - 1; i++)
        for (j = 0; j < x - i - 1; j++)
            if (arr[j] > arr[j + 1]){ 
                swap(arr[j], arr[j + 1]);
                swap(a[j], a[j + 1]);
            }
  for(int i=0; i<x; ++i){
    //cout<<arr[i] << " ";
      (p+i)->print_all();  
  }
  cout<<endl;

  
  for(c=0;c<=x;c++){ //add age array
  //cout<<p[c].getAge()<<endl; 
  arr[c]=p[c].getAge();
    }
cout<<"Age Sort\n"; //bubble age sort
    for (i = 0; i < x - 1; i++)
        for (j = 0; j < x - i - 1; j++)
            if (arr[j] > arr[j + 1]){ 
                swap(arr[j], arr[j + 1]);
                swap(a[j], a[j + 1]);
            }
  for(int i=0; i<x; ++i){
    //cout<<arr[i] << " ";
      (p+i)->print_all();  
  }
  cout<<endl;

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
  
  

  
  }