#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student{
private:
  string name;
  string studclass;
  int rollNum;
  float marks;
public:
  Student(){}
  Student(string n,string sc,int rno,float m){
    name =n;
    studclass = sc;
    rollNum = rno;
    marks = m;
  }
  
  void setName(string n){
    name = n;
  }
  void setStudClass(string sc){
    studclass = sc;
  }
  void setRollNum(int rno){
    rollNum = rno;
  }
  void setMarks(float m){
    marks = m;
  }

  string getName(){
    return name;
  }
  string getStudClass(){
    return studclass;
  }
  int getRollNum(){
    return rollNum;
  }
  float getMarks(){
    return marks;
  }

  void Grading(){
    if(marks>=90){
      cout<<"Grade: O"<<endl;
    }
    else if(marks>=75 && marks<90){
      cout<<"Grade: A+"<<endl;
    }
    else if(marks>=65 && marks<75){
      cout<<"Grade: A"<<endl;
    }
    else if(marks>=55 && marks<65){
      cout<<"Grade: B+"<<endl;
    }
    else if(marks>=50 && marks<55){
      cout<<"Grade: B"<<endl;
    }
    else if(marks>=45 && marks<50){
      cout<<"Grade: C"<<endl;
    }
    else if(marks>=40 && marks<45){
      cout<<"Grade: P"<<endl;
    }
    else{
      cout<<"Grade: F"<<endl;
    }
  }
  
  void displayInfo(){
    cout<<"Name: "<<name<<endl;
    cout<<"Class: "<<studclass<<endl;
    cout<<"Roll Num: "<<rollNum<<endl;
    cout<<"Marks: "<<marks<<endl;
    Grading();
  }
  
};


class StudentManager {
private:
  vector<Student> students;

public:

  void addStudent(){
    string name;
    string studclass;
    int rollNum;
    float marks;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Class: ";
    cin >> studclass;

    cout << "Enter Roll Number: ";
    cin >> rollNum;

    cout << "Enter Marks: ";
    cin >> marks;
    
    Student s(name,studclass,rollNum,marks);
    students.push_back(s);
    cout << "Student added successfully!\n";
  }

  void displayStudents(){
    if (students.empty()){
      cout << "No students found.\n";
      return;
    }

    for ( Student &s : students){
      s.displayInfo();
      cout << "\n----------------------\n";
    }
  }

  void searchStudent(){
    int rollNum;
    cout << "Enter Roll Number to search: ";
    cin >> rollNum;
    for (Student &s : students){
      if (s.getRollNum() == rollNum){
        cout << "Student Found!\n";
        s.displayInfo();
        return;
      }
    }
    cout << "Student not found.\n";
    return;
  }

  void updateStudent(){
    int rollNum;
    float newMarks;
    cout << "Enter Roll Number: ";
    cin >> rollNum;
    for (Student &s : students){
      if (s.getRollNum() == rollNum){
        cout << "Enter new marks: ";
        cin >> newMarks;
        s.setMarks(newMarks);
        cout << "Student updated successfully.\n";
        return;
      }
    }
    cout << "Student not found.\n";
  }

  void deleteStudent(){
    int rollNum;
    cout << "Enter Roll Number to delete: ";
    cin >> rollNum;
    for (auto it = students.begin(); it != students.end(); ++it){
      if (it->getRollNum() == rollNum){
        students.erase(it);
        cout << "Student deleted successfully.\n";
        return;
      }
    }
    cout << "Student not found.\n";
  }
};

int main(){
  StudentManager manager;
    int choice;
    // while loop se karna padega so 
    do{
      cout << "\n========== STUDENT MANAGEMENT SYSTEM ==========\n";
      cout << "1. Add Student\n";
      cout << "2. Display Students\n";
      cout << "3. Search Student\n";
      cout << "4. Update Student\n";
      cout << "5. Delete Student\n";
      cout << "6. Exit\n";
      cout << "Enter your choice: ";

      cin >> choice;
      
      if(choice == 1){
        manager.addStudent();
      }
      else if(choice == 2){
        manager.displayStudents();
      }
      else if(choice == 3){
        manager.searchStudent();
      }
      else if(choice == 4){
        manager.updateStudent();
      }
      else if(choice == 5){
        manager.deleteStudent();
      }
      else if(choice == 6){
        cout<<"Exit"<<endl;
        cout<<"Exit Successfully"<<endl;
        return 0;
      }
      else cout<<"Wrong Input"<<endl;
    }
    while (choice != 6);

    return 0;
}