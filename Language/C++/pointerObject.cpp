#include<iostream>
using namespace std;

class Cricketer{
public:
  string name;
  int runs;
  float avg;

  // constructor
  Cricketer(){

  }
  Cricketer(string name, int runs, float avg){ 
    this->name = name;
    this->runs = runs;
    this->avg = avg;
  }

  void printDetails(){
    cout<< this->name << '\n' << this->runs  << '\n' << this->avg <<endl; 
  }

  void change(Cricketer* c){
    c->avg=68.9; // -> means this (*c).avg = 77.2;
    // passing value to address to change value 
  }

};


int main(){
  Cricketer c1;
  c1.name="Virat Kohli";
  c1.runs= 25000;
  c1.avg = 52.7;
  Cricketer c2("Rohit Sharma",18000,47.8);
  
  Cricketer* p1 = &c1; // storing c1 address in p1 (pointer)
  cout<<(*p1).runs<<endl;
  
  int x = 4;
  int* p = &x; // address stored in it 
  cout<<*p<<endl; // value stored in that address
  *p = 100; // changing value stored in add p
  cout<<x<<endl; // changed value  

}