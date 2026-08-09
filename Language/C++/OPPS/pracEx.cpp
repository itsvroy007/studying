#include<iostream>
#include<string.h>
using namespace std;

class Rectangle{
public:
  int len,bred;
  Rectangle(){
  
  }

  Rectangle(int len=1, int bred=1){ // default value of len and bred is 1
    this->len=len;
    this->bred=bred;
  }

  void Area(){
    //cout<<"enter len: ";
    //cin>>len;
    //cout<<"enter bred: ";
    //cin>>bred;
    cout<<"Area: "<< this->len*this->bred<<endl;
  }

  void Perimeter(){
    cout<<"enter len: ";
    cin>>len;
    cout<<"enter bred: ";
    cin>>bred;
    cout<<"Perimeter: "<< 2*(len+bred)<<endl;
  }
};



class Circle{
private:
  double radius;
public:
  float pi= 3.14159;

  double get_area(double radius){
    double area = (double) pi * radius*radius;
    cout<<"Area: "<<area<<endl;
    return area;
  }
  void setRadius(double r){
    radius = r;
  }
  double getRadius(){
    return radius;
  }
};

class Date{
private:
  int day,month,year;
public:
  Date(){

  }
  
  void setDay(int d){// setting vallue in private member 
    day = d;
  }
  void setMonth(int m){
    month = m;
  }
  void setYear(int y){
    year = y;
  }
  int getDate(){
    return day;
  }
  int getMonth(){
    return month;
  }
  int getYear(){
    return year;
  }
  /*
  Date d1;
  d1.setDay(15);
  d1.setMonth(13);
  d1.setYear(2025);
  int dy = d1.getDate();
  int mon = d1.getMonth();
  int yr = d1.getYear();
  if(mon >= 13){
    mon = 1;
    cout<<yr<<"-"<<mon<<"-"<<dy<<endl;
  }
  else cout<<yr<<"-"<<mon<<"-"<<dy<<endl;
  
  */
};

class BankAccount{
private:
  double balance;
  int acc_num;
public:
  string acc_name;
  double deposit;
  double withdraw;
  
  BankAccount(){
  }

  BankAccount(string acc_name, int acc_num, double balance=0){
    this->acc_name=acc_name;
    this->acc_num=acc_num;
    this->balance=balance;
  }

  /*
  void setBalance(double b){
    balance = b;
  }
  */
  void setAcc_num(int n){
    acc_num = n;
  }
  
  void Credit(double deposit){
    if(deposit<=0){
      cout<<"deposit failed. Amt must be +ve"<<endl;
    }
    else{
      balance +=  deposit;
      cout<<"Deposit successfully." <<"New Balance: $"<<balance<<endl;
    } 
  }

  void Debit(double withdraw){
    if(withdraw <=0){
      cout<<"enter a positive amt"<<endl;
    }
    else if(balance<withdraw ){
      cout<<"Withdrawl failed. Insufficient Balance"<<endl;
    }
    else {
      balance -=  withdraw;
      cout<<"Withdrawl successfully." <<"New Balance: $"<<balance<<endl;
    }
  }
  double getBalance(){
    return this->balance;
  }
  /*
  BankAccount b("Bob",101,500); 
  b.deposit=650;
  b.Credit(b.deposit);
  cout<<"Name: "<<b.acc_name<<endl;
  cout<<"Bal: "<<b.getBalance()<<endl;
  */
};

class Tempearture{
private:
  float celsius;
  float fahrenheit;
public:
  void set_Celsius(float c){
    celsius = c;
  }
  void set_Fahrenheit(float f){
    fahrenheit = f;
  }

  void CtoF(float c){
    fahrenheit = (c * 9.0)/5.0 + 32.0;
  }

  void FtoC(float f){
    celsius = ((f - 32.0) * 5.0)/9.0;
  }

  float get_fahrenheit(){
    return fahrenheit;
  }
  float get_celcius(){
    return celsius;
  }
  
  /*
  Tempearture t;
  t.set_Celsius(100.0);
  t.CtoF(100.0);
  float f = t.get_fahrenheit();
  cout<<"F: "<<f<<endl;
  t.set_Fahrenheit(77.0);
  t.FtoC(77.0);
  float c = t.get_celcius();
  cout<<"C: "<<c<<endl;
  */
};

class Animal{
public:
  virtual void eat(){
    cout<<"Animal is eating generic food."<<endl;
  }
  void sleep(){
    cout<<"Animal is sleeping"<<endl;
  }
};

class Dog : public Animal{
public:
  void eat(){
    cout<<"Dog is eating kibble."<<endl;
  }
  void bark(){
    cout<<"woof! woof!"<<endl;
  }
  /*
  Dog d;
  d.eat();
  d.sleep();
  d.bark();
  */
};

class Vehicle{
private:
  int year;
public:
  Vehicle(){

  }
  Vehicle(int year){
    this->year = year;
  }
  void strt_trans(){
    cout<<"Vehicle ("<<year<<")is moving."<<endl;
  }
};
class Car : public Vehicle{
private:
  int year;
  string mfg;
  string model;
public:
  int price;
  Car(){
  }
  Car(int year, string mfg,string model){
    this->year = year;
    this->mfg = mfg;
    this->model = model;
  }

  void setMfg(string m){
    mfg = m;
  }
  void setModel(string m){
    model = m;
  }

  int getYear(){
    return year;
  }

  void displayInfo(){
    cout<<year<<" "<<mfg<<" "<<model;
  }

  void start_engine(){
    cout<<"Year: ";
    cin>>year;
    cout<<"Mfg: ";
    cin>>mfg;
    cout<<"Model: ";
    cin>>model;
    cout<<year<<" "<<mfg<< " "<<model<<" engine strted"<<endl;
  }
  /*
  Car c(2018,"Honda","Civic");
  cout<<"Car was mfg in : "<<c.getYear()<<endl;
  cout<<"Changing car details"<<endl;
  c.setMfg("Maruti");
  c.displayInfo();
  */


private:
  int numOfDoor;
public:
  Car(int year ,int numOfDoor){
    Vehicle(year);
    this->numOfDoor=numOfDoor;
  }
  void setNumOfDoor(int n){
    numOfDoor = n;
  }
  void openDoor(){
    cout<<"Car with "<<numOfDoor<<"doors opened"<<endl;
  }
};
class SuperCar : public Car{
private:
  int maxSpeed;
public:
  SuperCar(){

  }
  SuperCar(int year, int numOfDoor,int maxSpeed){
    Car(year,numOfDoor);
    this->maxSpeed = maxSpeed;
  }
  void setMaxSpeed(int m){
    maxSpeed = m;
  }
  void activated_turbo(){
    cout<<"Sports Car turbo activated! Max Speed: "<<maxSpeed<<" mph"<<endl;
  }
};  

int main(){
  SuperCar ferrari(2023,2,210);
  ferrari.strt_trans();
  ferrari.openDoor();
  ferrari.activated_turbo();
}