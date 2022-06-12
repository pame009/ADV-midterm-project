#include <iostream>
using namespace std;
#include"employee.h"

int main(int argc, char **argv) {
  /*

after compile the file, paste this line to the console:
./main jack 1000 20 ming 2000 100 

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
  int i,c;
  string n;
  float s;
  for(c=0,i=1;i<(argc-1);c++,i+=3){ //get input from argv
  p[c].set_all(argv[i],atoi(argv[i+1]),atoi(argv[i+2]));
    }

  for(c=0,i=1;i<(argc-1);c++,i+=3){ //print all output
  (p+c)->print_all();  
    }




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