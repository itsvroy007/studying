#include<iostream>
using namespace std;

/* 
polymorphism -> different form of same entity
like a person can your -> friend , parent[mother , father], bro/sis , son/daugther

errors 
1. complie time error -> syntactical errors like missing out ; ( ) bracket etc
2. runtime error -> div by 0 , index negatuve , out of bound index

function overloading -> same function using with different no. of params or diff param datatype , it would be not funct overloading if function is off diff data type

operator overloading -> same operator being used to perform diff operation 
operator overloading -> using same operator which perform diff operation on operands like 3+ 8 = 11 but "3" + "8" = 28 as + in int give sum but + in str performs appends

Virtual Funct and over riding -> runtime polymorphism
over riding -> same name function from parent class used in diff child class but which can be modify
*/

class Loading{
public:
  void sum(int a , int b){
    cout<<a+b<<endl;
  }
  
  void sum(int a , int b, int c){
    cout<<a+b+c<<endl;
  }

  void sum(string a , string b){
    cout<<a+b<<endl;
  }
  /* 
  error due to diff return type
  int sum(int a , int b){
    return a+b;
  }
  */
};


class Fraction{
public:
  int num;
  int den;
  Fraction(int num,int den){
    this->num=num;
    this->den=den;
  }

  void display(){
    cout<<num<<"/"<<den<<endl;
  }
  
  Fraction add(Fraction f){
    int newNum = (this->num*f.den + this->den*f.num );
    int newDen = (this->den*f.den);
    Fraction ans(newNum,newDen);
    return ans;
  }
  Fraction operator+(Fraction f){ // defing the operation for + operator
    int newNum = (this->num*f.den + this->den*f.num );
    int newDen = (this->den*f.den);
    Fraction ans(newNum,newDen);
    return ans;
  }

  Fraction operator-(Fraction f){ // defing the operation for - operator
    int newNum = (this->num*f.den - this->den*f.num );
    int newDen = (this->den*f.den);
    Fraction ans(newNum,newDen);
    return ans;
  }

  Fraction operator*(Fraction f){ // defing the operation for * operator
    int newNum = (this->num*f.num );
    int newDen = (this->den*f.den);
    Fraction ans(newNum,newDen);
    return ans;
  }

  Fraction operator/(Fraction f){ // defing the operation for / operator
    int newNum = (this->num*f.den);
    int newDen = (this->den*f.num);
    Fraction ans(newNum,newDen);
    return ans;
  }

  int gcd(int num1,int num2){
    int rem;
    rem = num1%num2;
    if(rem == 0){
      return num2;
    }
    return gcd(num2,rem);
  }

  void simplify(){ // function for simplify
    int newNum = this->num;
    int newDen = this->den;
    int hcf;
    hcf = gcd(newNum,newDen);
    newNum /= hcf; 
    newDen /= hcf;
    cout<<newNum << "/" << newDen<<endl;
    }
};

class Scooty{
public:
  int topSpeed;
  int mileage;
  virtual void sound(){ // using virtual -> accessing scoty memory for other class funct msg
    cout<<"vrommmm vrommm"<<endl;
  }
};

class Bike : public Scooty{
public:
  int gears;
  void sound(){
    cout<<"dhromm dhromm"<<endl;
  }
};

class SuperBike : public Scooty{
public:
  void sound(){
    cout<<"Zroom Zroom"<<endl;
  }
};

int main(){
  Fraction f1(1,2);
  Fraction f2(2,3);
  // Fraction f3 = f1.add(f2);
  Fraction f3 = f1 * f2;
  f3.display();
  f3.simplify();
  
  Scooty* b = new Bike();
  b->sound();
  Scooty* c = new SuperBike();
  c->sound();

  return 0;
}