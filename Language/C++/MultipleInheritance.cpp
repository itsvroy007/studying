#include<iostream>
using namespace std;

class Cricketer{
private:
  float fees;
public:
  int runs;
  int wickets;
  float average;
  string type; // bowler batsmen wicket keeper all rounder
};

class Engineer{
private:
  float salary;
public:
  int exp;
  string domain;
  Engineer(){

  }
};

class Phodu : public Cricketer, public Engineer{ // multiple parent class -> inherit both class attribute
public:  // we need to mention access modifier -> public , else it would be private by default 
  string name;
  Phodu(){
  }
  void printDetails(Phodu p){
    cout<<"Name: "<<p.name<<endl;
    cout<<"Domain: "<<p.domain<<endl;
    cout<<"Exp: "<<p.exp<<" yrs"<<endl;
    cout<<"Runs: "<<p.runs<<endl;
    cout<<"Wickets: "<<p.wickets<<endl;
    cout<<"Avg: "<<p.average<<endl;
    cout<<"Type: "<<p.type<<endl;
  }

};

int main(){
  Phodu p1;
  p1.name= "Saurabh Natvalkar";
  p1.domain = "Software Engineer";
  p1.exp = 10;
  p1.runs = 589;
  p1.wickets = 18;
  p1.average = 38.8;
  p1.type = "All-rounder";
  p1.printDetails(p1);
  return 0;
}