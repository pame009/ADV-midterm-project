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
  cout<<endl<<"Name "<<setw(8)<<Name<<endl;
  cout<<"    Salary "<<setw(8)<<Salary<<endl;
  cout<<"    Age "<<setw(8)<<Age<<endl<<endl;
  
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
 		cout<<"Name: "<<setw(8)<<Name<<"    Salary: "<<setw(8)<<Salary<<"    Age: "<<setw(8)<<Age<<" Too old!"<<endl;
    else
 		cout<<"Name: "<<setw(8)<<Name<<"    Salary: "<<setw(8)<<Salary<<"    Age: "<<setw(8)<<Age<<endl;
}


};

class developer:public employee{ //inheritance
public:
string Extra;
developer(string a=" ",string extra=" ",int b=0, int c=0)
  :employee(a, b=0, c = 0)
{ 
  Extra = extra;
}
void set(string a=" ",string extra=" "){
  setName(a);
  Extra=extra;
  
}
void print_all(){
 		cout<<"Name: "<<setw(8)<<getName()<<"  ->   Specialty: "<<setw(8)<<Extra<<endl;
}

};

#endif
