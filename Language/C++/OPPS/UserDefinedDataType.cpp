#include <iostream>
using namespace std;

class Car{ // car is a new datatype and name,price,type and seat is its props 
public: 
  string name;
  int price;
  string type;
  int seat;
};

void print(Car c){
  cout<<"Car name: "<<c.name<<endl;
  cout<<"Car price: "<<c.price<<endl;
  cout<<"Car type: "<<c.type<<endl;
  cout<<"Car seat: "<<c.seat<<endl;
}

void change(Car c){ // it is passed by value but if we use Car& then it is pass by ref
  cout<<"Enter the car name: ";
  cin>>c.name;
}


int main(){
  Car c1;
  c1.name="Honda City";
  c1.price=1500000;
  c1.seat=5;
  c1.type="sedan";

  Car c2;
  c2.name="Maruti Swift";
  c2.price=700000;
  c2.seat=5;
  c2.type="HatchBack";

  Car c3;
  c3.name="Toyota Fortuner";
  c3.price=3600000;
  c3.seat=8;
  c3.type="SUV";
  
  print(c1);
  print(c2);
  print(c3);
  change(c1); // the name doesnt change as of passed by value not passed by ref 
  print(c1);
  return 0;
}