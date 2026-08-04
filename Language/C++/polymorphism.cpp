#include<iostream>
using namespace std;

/* 
polymorphism -> different form of same entity
like a person can your -> friend , parent[mother , father], bro/sis , son/daugther

errors 
1. complie time error -> syntactical errors like missing out ; ( ) bracket etc
2. runtime erroe -> div by 0 , index negatuve , out of bound index
*/

// function overloading -> same function using with different params or diff datatype , it would be not funct overloading if function is off diff data type

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
  /* error due to diff return type
  int sum(int a , int b){
    cout<<a+b<<endl;
  }
  */
};

// operator overloading -> using same operator which perform diff on operands like 3+ 8 = 11 but "3" + "8" = 28 as + in int give sum but + in str performs appends

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
    
  }
};

int main(){
  Fraction f1(1,2);
  f1.display();
  return 0;
}