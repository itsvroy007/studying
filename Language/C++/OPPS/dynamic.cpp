#include<iostream>
using namespace std;

class Cricketer{
public:
  string name;
  int runs;
  float avg;

  //  default constructor
  Cricketer(){

  }
  Cricketer(string name, int runs, float avg){ 
    this->name = name;
    this->runs = runs;
    this->avg = avg;
  }

  void printDetails(){ // here this-> is used to specify the prop 
    cout<< this->name << '\n' << this->runs  << '\n' << this->avg <<endl; 
  }

};


int main(){
  Cricketer c1;
  c1.name="Virat Kohli";
  c1.runs= 25000;
  c1.avg = 52.7;

  Cricketer* c2 = new Cricketer("Rohit Sharma",18000,47.8); // storing in pointer named c2
  cout<< c2->name << '\n'<< c2->runs<<endl;
  
  int* ptr = new int (5678); // dynamic allocation
  // memory allocate in runtime -> as no new var created to store 5678
  cout<<*ptr<<endl;
}