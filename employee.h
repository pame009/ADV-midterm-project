#ifndef employee_h
#define employee_h

#include <iostream>
#include <iomanip>
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
  return Age;
}

void introduce(){
  cout<<endl<<"Name "<<setw(10)<<Name<<endl;
  cout<<"Salary "<<setw(10)<<Salary<<endl;
  cout<<"Age "<<setw(10)<<Age<<endl<<endl;
  
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
    if(Age>=60) //not allow age exceed 60
 		cout<<"Name "<<setw(10)<<Name<<" Salary: "<<setw(10)<<Salary<<" Age "<<setw(10)<<Age<<" Too old!"<<endl;
    else
 		cout<<"Name "<<setw(10)<<Name<<" Salary: "<<setw(10)<<Salary<<" Age "<<setw(10)<<Age<<endl;
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
