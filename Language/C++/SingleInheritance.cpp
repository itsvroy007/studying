#include <iostream>
using namespace std;

/* Inheritance -> single lvl or multilvl

Single lvl -> when child/ children inherit from parent or parents
Multi lvl -> grandchild -> parent -> grandParent 

*/


class Vehicle{ // parent class
public:
  int topSpeed;
  float mileage;
  string fuel;
  int ccEngine;
};

class Car : public Vehicle{
public:
  string type; // suv hatchback sedan
};

class Scooty{ // derived
public:
  int topSpeed;
  float mileage;
private:
  int bootSpace;
};

class Bike : public Scooty{ // : -> extends take all member of scooty it is derived/child class [ vehicle -> scooty -> bike ] multi lvl inherihtance
public:
  int gears;
  Bike(){

  }
  Bike(int topSpeed , float mileage , int gears){
    this->topSpeed=topSpeed;
    this->mileage=mileage;
    this->gears=gears;
  }

  void printDetails(Bike b){
    cout<<"TopSpeed :"<<b.topSpeed<<endl;
    cout<<"Mileage :"<<b.mileage<<endl;
    cout<<"Gears :"<<b.gears<<endl;
  }
};


class Truck : public Vehicle{
public:
  int tyres;
  int space;
};


int main(){
  Bike b1(180,12.5,6);
  return 0;
}