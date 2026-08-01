#include <iostream>
using namespace std;

/* 4 core parts of oops [object oriented programming]
1. Classes and objects [ abstraction]
2. Encapsulation -> data/prop + member function within a class 
3. Inheritence
4. polymorphism

  access modifier 
1. public
2. private -> data hiding
3. protected
*/


class Student{ // student is a new datatype and name,rno,gpa is its props 
public: 
  string name;
  int rno;
  float gpa;
  int age;
  
  // default constructor -> dot operator if any constructor is defined then default constructor not work
  // they dont have nany return type
  Student(){
  
  }
  // multiple constructor can be made either 1 param,2 param or 3 or 4 param

  // creating constructor -> a function which doesnot have any return datatype 
  Student(string s, int r, float g , int a){ // parameterised constructor
    name = s;
    rno = r;
    gpa = g;
    age = a;
  }
};

void printDetails(Student s){
  cout<<"Student name: "<<s.name<<endl;
  cout<<"Student rno: "<<s.rno<<endl;
  cout<<"Student gpa: "<<s.gpa<<endl;
  cout<<"Student age: "<<s.age<<endl;
}

class Teacher{
private:
  double salary; // props which cant be accessed
public:
  // props or attributes 
  string name;
  string dept;
  string sub;

  //constructor -> always to be public
  Teacher(){
    // dept = "CS"; assingn all obj dept to be CS
  }

  // methods or member function -> mem of class
  void changeDept(string newDept){
    dept = newDept;
  }
  // setter
  void setSalary(double s){
    salary=s;
  }
  // getter
  double getSalary(){
    return salary;
  }
};




int main(){
  
  printf("hello , nice to meet u");
  
  Student s1; // student is class while s1 is obj[declarartion] and it will call the default constructor
  s1.name="Raghav";
  s1.rno=76;
  s1.gpa=8.7;
  s1.age=28;
  
  //Student s1("Raghav",76,8.7,28);

  Student s2("Himanshu",82,8.5,24); // if no value passed then it will have garbage value 
  s2.gpa=8.7; // it will overwrite the passed value and changed it to new 

  Student s3("Raj",36,8.4,20);

  Student s4= s1; // deep copy -> value get changed 
  s4.name="Manish";
  s4.rno=78;

  Student s5(s1); //[copy constructor of s1] it is also deep copy -> passing value of s1 in s5 but changes can be done
  s5.name="Ankit";
  s5.rno=77;


  printDetails(s1);
  printDetails(s2);
  printDetails(s3);
  printDetails(s4);
  return 0;
}
