#include <iostream>
#include <string.h>
using namespace std;

#include"employee.h"
#include"sorting.h"
int x =0;
int main(int argc, char **argv) {
  /*

after compile the file, paste this line to the console:
./main jack 1000 20 ming 2000 100 f 1 5 a 5 1

  */
  
  // employee e1;
  // e1.name = "f1";
  // e1.company = "a1";
  // e1.age = 25;
  // e1.introduce();

  employee e2 = employee("f2",1000,26);
  // e2.name = "f2";
  // e2.Salary = 1000;
  // e2.age = 26;
  e2.introduce();

  employee *p= new employee[(argc-1)/3]; //use pointer p
  employee a[10];
  p=a;
  int i,c,j,n;
  for(c=0,i=1;i<(argc-1);c++,i+=3){ //get input from argv
  p[c].set_all(argv[i],atoi(argv[i+1]),atoi(argv[i+2]));
    }

  for(c=0,i=1;i<(argc-1);c++,i+=3){ //print all output
  cout<<c<<endl;  
  (p+c)->print_all();  
    x=c;
    }

  int arr[10];
  for(c=0;c<=x;c++){ //add salary array
  cout<<p[c].getSalary()<<endl; 
  arr[c]=p[c].getSalary();
    }
  

    x+=1;
cout<<"Bubble Sort\n"; //salary sort
    for (i = 0; i < x - 1; i++)
        for (j = 0; j < x - i - 1; j++)
            if (arr[j] > arr[j + 1]){ 
                swap(arr[j], arr[j + 1]);
                swap(a[j], a[j + 1]);
            }
  for(int i=0; i<x; ++i){
    cout<<arr[i] << " ";
      (p+i)->print_all();  

  }
  cout<<endl;
  
  for(c=0;c<=x;c++){ //add age array
  cout<<p[c].getAge()<<endl; 
  arr[c]=p[c].getAge();
    }
cout<<"Bubble Sort\n"; //age sort
    for (i = 0; i < x - 1; i++)
        for (j = 0; j < x - i - 1; j++)
            if (arr[j] > arr[j + 1]){ 
                swap(arr[j], arr[j + 1]);
                swap(a[j], a[j + 1]);
            }
  for(int i=0; i<x; ++i){
    cout<<arr[i] << " ";
      (p+i)->print_all();  

  }
  cout<<endl;



  /*
  employee e3 = employee();
  e3.introduce();
  employee e4 = employee("e4");
  e4.introduce();
  employee e5 = employee();
  e5.introduce();
  
  developer d1=developer("f3","a3",30,"c++");
  d1.intro();
*/

  
  

  
  }