#include <iostream>
using namespace std;

/* 4 core parts of oops [object oriented programming]
1. Classes and objects [ abstraction]
2. Encapsulation -> data/prop + member function within a class 
3. Inheritence
4. polymorphism

  access modifier 
1. public -> data for accessable to all
2. private -> data hiding
3. protected


Object-oriented programming (OOP) is a programming paradigm that focuses on using objects, which are instances of classes, to organize and structure code. OOP is widely used in software development, and proficiency in OOP is often a requirement for many programming jobs. 

1. What is OOP?

Object-oriented programming is a programming paradigm that uses objects and instances of classes to organize and structure code. OOP emphasizes encapsulation, inheritance, and polymorphism to make code more modular, extensible, and reusable.

2. What is a class?

A class is a blueprint for creating objects in OOP. It defines the properties and behaviors that objects of the class will have. Classes provide a way to organize code and encapsulate data and functionality.

3. What is Garbage Collection in the OOP System?

Object-oriented programming (OOP) is a popular programming paradigm that revolves around the concepts of objects and classes. In an OOP system, managing memory and objects effectively is important to prevent errors or system crashes. One way to handle memory-related tasks in an OOP system is through garbage collection, which removes unwanted objects to free up memory.

4. Can Java applications be executed without following OOP?

Java is a popular programming language that is based on the OOP system. It cannot be run without OOPS implementations. Meanwhile, languages like C++ can be used with or without OOPs. Practicing OOPS coding questions in both Java and C++ is important to prepare for technical questions related to OOPS concepts.

5. What are interfaces?

Interfaces are used for declaring a method without specifically defining it. They do not contain instructions or behaviors to be executed and are not templates or blueprints for the program. In contrast, classes are user-defined blueprints containing instructions or methods that must be passed through the objects. Structures are user-defined sets of variables that contain various data types.

6. What are pure virtual functions?

Pure virtual functions are abstract functions that only get declared in the base classes. They do not contain definitions in the base classes and must be redefined inside the subclasses. Abstraction is a method of hiding details that are not required from important ones. Exceptions are special occurrences or events that can lead to execution failure or stopping.

7. What is a superclass?

Superclasses refer to the classes that allow other classes or any other class to inherit functions or behavior. Constructors are special methods that help initialize objects, while destructors are special methods that free up memory or resources occupied by objects. Destructors are used when objects need to be removed and destroyed and are automatically called during these scenarios.
There are many more questions like the following:

    Can you create an instance of an abstract class?

    What are virtual functions?

    What is the use of ‘finalize’?

    Differentiate between an abstract class and an interface?

    What is an exception?

    What is exception handling?

    What is the difference between an error and an exception?


*/


class Student{ // student is a new datatype and name,rno,gpa is its props 
public: 
  string name;
  int rno;
  float gpa;
  int age;
  
  // default constructor -> dot operator if any constructor is defined then default constructor not work , if constructor in private then it would be inaccessable
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
private: // cant use / access
  double salary; // props which cant be accessed but it value can be set within constructor and it accessable in function member
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
  // setter -> to set/change value in private member
  void setSalary(double s){
    salary=s;
  }
  // getter -> to retrive value of private member 
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
