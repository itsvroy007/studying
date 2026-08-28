#include <iostream>
#include <string.h>
using namespace std;

/* lab prog 1 Cab booking using functions 

string CustName;
string PickUpLoc;
string dest;
string carType;
float tripDistance;
float fare;
int choice;

void EnterDetails(){
    cout<<"Enter CustName: ";
    cin>>CustName;
    cout<<"Enter PickUpLoc: ";
    cin>>PickUpLoc;
    cout<<"Enter destination: ";
    cin>>dest;
    cout<<"Enter tripDistance: ";
    cin>>tripDistance;
    return;
}

void CarBooking(){

    cout<<"cab type:"<<endl;
    cout<<"1.Mini    --10 per km "<<endl;
    cout<<"2.GO      --15 per km"<<endl;
    cout<<"3.Sedan   --20 per km"<<endl;
    cout<<"4.SUV     --25 per km"<<endl;
    cout<<"5.Luxuary --30 per km"<<endl;

    cout<<"Enter your choice (enter 1-5): ";
    cin>>choice;

    if(choice == 1){
        carType = "Mini";
        fare = tripDistance * 10;
        printf("You have selected Mini cab.");

    }
    else if(choice == 2){
        carType = "Go";
        fare = tripDistance*15;
        printf("You have selected Go cab.");
    }
    else if(choice == 3){
        carType = "Sedan";
        fare = tripDistance*20;
        printf("You have selected Sedan cab.");
    }
    else if(choice == 4){
        carType = "SUV";
        fare = tripDistance*25;
        printf("You have selected SUV cab.");
    }
    else if(choice == 5){
        carType = "Luxury";
        fare = tripDistance*30;
        printf("You have selected Luxury cab.");
    }
    else cout<<"wrong input Try again";
    return ;
}

void displayInfo(){
    cout<<"\nCAB BOOKING DETAILS"<<endl;
    cout<<"Customer Name: "<<CustName<<endl;
    cout<<"Pick Up loc: "<<PickUpLoc<<endl;
    cout<<"Destination: "<<dest<<endl;
    cout<<"Distance: "<<tripDistance<<endl;
    cout<<"cab type: "<<carType<<endl;
    cout<<"Total Fare: Rs. "<<fare<<endl;
}

int main(){
  EnterDetails();
  CarBooking();
  displayInfo();
  string confirmation;
  cout<<"CONFIRM BOOKING - Y or N"<<endl;
  cin>>confirmation;
  if(confirmation == "Y" || confirmation == "y") cout<<"Booking Confirmed !"<<endl;
  else cout<<"Booking Not Confirmed"<<endl;
  return 0;
}
  */

/* lab pro 2 Matrix Multiplication
class Matrix{
private:
  int mat[10][10];
  int rows;
  int cols;

public:
  void input(){
    cout << "Enter rows: ";
    cin >> rows;
    cout << "Enter cols: ";
    cin >> cols;
    cout << "Enter elem in matrix: \n";
    for (int i = 0; i < rows; i++){
      for (int j = 0; j < cols; j++){
        cin >> mat[i][j];
      }
    }
  }

  void display(){
    cout << "Display of matrix:\n";
    for (int i = 0; i < rows; i++){
      for (int j = 0; j < cols; j++){
        cout << mat[i][j]<<" ";
      }
      cout << endl;
    }
  }

  Matrix Multiply(Matrix B){
    Matrix result;
    if (cols == B.rows){
      result.rows = rows;
      result.cols = B.cols;
      for (int i = 0; i < rows; i++){
        for (int j = 0; j < B.cols; j++){
          result.mat[i][j] = 0;
          for (int k = 0; k < cols; k++){
            result.mat[i][j] = result.mat[i][j] + (mat[i][k] * B.mat[k][j]);
          }
        }
      }
    }
    else{
      cout<<"Matrix Multiplication Not Possible as Num of cols of Matrix A not equal to Num of rows of Matrix B."<<endl;
      // need a code line to stop storing garbage value in result matrix
      result.rows = rows;
      result.cols = B.cols;
      for (int i = 0; i < rows; i++){
        for (int j = 0; j < B.cols; j++){
          result.mat[i][j] = 0;
        }
      }
    }
    return result;
  }
};

int main(){
  Matrix A;
  cout << "Matrix A :" << endl;
  A.input();
  cout << "display of mat A: " << endl;
  A.display();
  Matrix B;
  cout << "Matrix B :" << endl;
  B.input();
  cout << "display of mat B: " << endl;
  B.display();
  cout << "Result Matrix: " << endl;
  Matrix result = A.Multiply(B);
  result.display();
  return 0;
}
*/

// lab prog 3 to perform addition of two complex numbers using constructor overloading.
/*
class ComplexNum{
private:
  double real;
  double imag;
public:
  ComplexNum(){

  }
  ComplexNum(double num){
    real = imag = num;
  }
  ComplexNum(double real,double imag){
    this->real = real;
    this->imag = imag;
  }

  ComplexNum add(ComplexNum C){
    ComplexNum result;
    result.real = real + C.real;
    result.imag = imag + C.imag;
    return result;
  }
  void display(){
    cout<<"Real part is: "<<real<<endl;
    cout<<"Imag part is: "<<imag<<endl;
    cout<<"Complex num is: "<<real<<" + "<<imag<<"i"<<endl;
    return ;
  }
};

int main(){
  ComplexNum c1(5.5);
  c1.display();
  ComplexNum c2(5.6,9.7);
  c2.display();
  ComplexNum c3 = c1.add(c2);
  c3.display();
  return 0;
}
*/


