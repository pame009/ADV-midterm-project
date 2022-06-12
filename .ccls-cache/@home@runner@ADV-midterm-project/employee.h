#ifndef employee_h
#define employee_h

#include <iostream>
using namespace std;

class employee{
private: //encapsulation
  string Name;
  int Salary;
  int Age;

public:
void setName(string name){ //setter
  Name = name;
}
string getName(){ //getter
  return Name;
}
void setSalary(int salary){ 
  Salary = salary;
}
int getSalary(){ 
  return Salary;
}
void setAge(int age){ 
  Age = age;
  
}
int getAge(){ 
  if(Age<=60) //not allow age exceed 100
  return Age;
}

void introduce(){
  cout<<endl<<"name "<<Name<<endl;
  cout<<"Salary "<<Salary<<endl;
  cout<<"age "<<Age<<endl<<endl;
  
}

employee(string a="-", int b=0, int c = 0){
  Name = a;
  Salary = b;
  Age = c;
  
}

void set_all(string n, int a, int s){
    setName(n);
    setSalary(a);
    setAge(s);
}

void print_all(){
    if(Age>=60) //not allow age exceed 100
 		cout<<"print all name "<<Name<<" Salary: "<<Salary<<" age "<<Age<<" Too old!"<<endl;
    else
 		cout<<"print all name "<<Name<<" Salary: "<<Salary<<" age "<<Age<<endl;
}


};

class developer:public employee{ //inheritance, public to access function in employee
public:
string Extra;
developer(string a, int b, int c, string extra)
  :employee(a, b, c)
{ 
  Extra = extra;
}

void intro(){
  cout<<getName()<<" fix bug using "<<Extra<<endl;
}



};





#endif
