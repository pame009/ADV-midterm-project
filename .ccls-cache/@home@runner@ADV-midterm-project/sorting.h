#include <iostream>
#include <iomanip>
using namespace std;

void bubbleSort(int, int);
inline void swap(int &, int &);
void insertSort(int, int);
void selectionsort(int, int);

inline void swap(int &a, int &b){
  int temp;
  temp = a;
  a = b;
  b = temp;
}

void bubbleSort(int a[], int n){
cout<<"Bubble Sort\n";
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
  for(int i=0; i<n; ++i){
    cout<< a[i] << " ";
  }
  cout<<endl;
}


void insertionSort(int a[], int n){
  cout<<"Insertion Sort\n";
  int i, key, j;
  for (i = 1; i < n; i++){
    key = a[i];
    j = i - 1;
    while (j >= 0 && a[j] > key){
      a[j + 1] = a[j];
      j = j - 1;
    }
    a[j + 1] = key;
  }
  for(int i=0; i<n; ++i){
    cout<< a[i] << " ";
  }
  cout<<endl;
}


void selectionSort(int a[], int n){
  cout<<"Selection Sort\n";
  int i, j, min_i;
  for (i = 0; i < n-1; i++){
    min_i = i;
    for (j = i+1; j < n; j++){
      if (a[j] < a[min_i])
        min_i = j;
    }
    swap(a[min_i], a[i]);
  }
  for(int i=0; i<n; ++i){
    cout<< a[i] << " ";
  }
  cout<<endl;
}


