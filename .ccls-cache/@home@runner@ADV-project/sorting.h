#include <iostream>
#include <iomanip>
#include"employee.h"

using namespace std;

inline void swap(int &a, int &b){
  int temp;
  temp = a;
  a = b;
  b = temp;
}

void salarySort(employee a[10], int x){
  int i,j,c;
  int arr[10];

  for(c=0;c<=x;c++){ //add salary array
  //cout<<p[c].getSalary()<<endl; 
  arr[c]=a[c].getSalary();
    }
  cout<<"\nSalary Sort\n"; //bubble salary sort
    for (i = 0; i < x - 1; i++)
        for (j = 0; j < x - i - 1; j++)
            if (arr[j] > arr[j + 1]){ 
                swap(arr[j], arr[j + 1]);
                swap(a[j], a[j + 1]);
            }
  for(int i=0; i<x; ++i){
    //cout<<arr[i] << " ";
    cout<<i+1<<" ";
      (a+i)->print_all();  
  }
}

void ageSort(employee a[10], int x){
  int i,j,c;
  int arr[10];

  for(c=0;c<=x;c++){ //add age array
  //cout<<p[c].getAge()<<endl; 
  arr[c]=a[c].getAge();
    }
cout<<"\nAge Sort\n"; //bubble age sort
    for (i = 0; i < x - 1; i++)
        for (j = 0; j < x - i - 1; j++)
            if (arr[j] > arr[j + 1]){ 
                swap(arr[j], arr[j + 1]);
                swap(a[j], a[j + 1]);
            }
  for(int i=0; i<x; ++i){
    //cout<<arr[i] << " ";
    cout<<i+1<<" ";
      (a+i)->print_all();  
  }
}

bool check(int arr[]){     
  //cout<<arr[1]<<" arr"<<endl;
  //array fill with 0
    //Searches for duplicate element  
    for(int i = 0; i < 20; i++) { //size not exceed 20  
        for(int j = i + 1; j < 20; j++) {  
          cout<<arr[j]<<" * ";
          
          if(arr[i] == arr[j])  { 
            
            if(arr[i]==8) break; //if find duplicate = 0, break then return true 
              else{
                //printf("false %d\n", arr[j]);  
                return false;
                }
            }
        }  
    }
  
  return true;
}


