#include<iostream>
using namespace std;

// creating a new vector -> a vector is just like an array but non defined size -> its size and capacity changes 
// vector <Data_Type> vectorName;
// to insert entries -> vector_Name.push_back(value);
// to delete last entry -> vector_Name.pop_back(); size remains same  

void VectorBasics(){
  vector <int> v;
  v.push_back(10);
  v.push_back(9);
  v.push_back(21);
  v.push_back(2);
  for (int i=0;i<4;i++){
    cout<<v[i]<<endl;
  }
  cout<<"new array:"<<endl;
  v.pop_back();
  for (int i = 0; i < 4; i++){
    cout<<v[i]<<endl;
  }
  return ;
}

class Vector{
public: 
  int size;
  int capacity;
  int* arr; // pointer array

  Vector(){// default constructor
    size = 0;
    capacity=1;
    arr = new int [1];
  }

  void add(int elem){
    if (size == capacity){
      capacity= capacity*2;
      int* arr2 = new int [capacity];
      for (int i=0;i<size;i++){
        arr2[i]= arr[i];
      }
      arr = arr2;
    }
    arr[size] = elem;
    size++;
  }
  void printElem(){
    for (int i=0;i<size;i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
  }

  int get(int index){
    if (size==0){
      cout<<"Arr is empty"<<endl;
      return -1;
    }
    if (index>=size || index<0){
      cout<<"Invalid index"<<endl;
      return -1;
    }
    return arr[index];
  }

  void remove(){
    if (size==0){
      cout<<"Arr is empty"<<endl;
    }
    size--; // no need to remove the particular elem just adjust the size
  }
};




int main(){
  cout<<"hello"<<endl;
  Vector v;

  cout<<v.size<<" "<<v.capacity<<endl;
  v.add(5);// elem added and capacity is doubled 
  v.printElem();
  cout<<v.size<<" "<<v.capacity<<endl;
  v.add(10);
  v.printElem();
  cout<<v.size<<" "<<v.capacity<<endl;
  v.add(15);
  v.printElem();
  cout<<v.size<<" "<<v.capacity<<endl;
  v.add(20);
}