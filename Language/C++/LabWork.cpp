#include <iostream>
#include <string.h>
using namespace std;

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


