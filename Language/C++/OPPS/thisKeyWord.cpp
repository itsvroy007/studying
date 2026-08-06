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
  Cricketer(string name, int runs, float avg){ // if this keyword not used name=name -> gives error garbage values stored ho jati hai
  // this keyword helps -> to state name and runs prop is only to be reference not the variable 
    this->name = name;
    this->runs = runs;
    this->avg = avg;
  }

  void printDetails(){ // here this-> is used to specify the prop 
    cout<< this->name << '\n' << this->runs  << '\n' << this->avg <<endl; 
  }

  int matches(){
    return runs/avg;
  }
};


int main(){
  Cricketer c1;
  c1.name="Virat Kohli";
  c1.runs= 25000;
  c1.avg = 52.7;
  Cricketer c2("Rohit Sharma",18000,47.8);
  
  c1.printDetails();

}