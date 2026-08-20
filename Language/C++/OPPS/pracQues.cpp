#include<iostream>
using namespace std;

// create Time clas and method of adding time int both form min to hour and hour to mins  
class Time{
private :
  int hour ;
  int minutes;
public:
  Time(){ // default constructor
  }
  Time(int hour,int minutes){ // parameterized constructor
    this->hour = hour;
    this->minutes = minutes;
  }
  Time(int minutes){
    this->minutes = minutes;
  }
  Time addMinutes(Time T){
    Time result;
    result.hour = (int) (minutes + T.minutes)/60;
    result.minutes = (minutes + T.minutes)%60;
    cout<<"Total Hour: "<<result.hour<<endl;
    cout<<"Total Min: "<<result.minutes<<endl;
    return result;
  }
  Time addTime(Time T){
    Time result;
    result.hour = hour + T.hour;
    if(minutes + T.minutes >= 60){
      result.hour = result.hour+1;
      result.minutes = (minutes + T.minutes)%60;
    }
    else{
      result.minutes = minutes + T.minutes;
    }
    cout<<"Total Hour: "<<result.hour<<endl;
    cout<<"Total Min: "<<result.minutes<<endl;
    return result;
  }
  void display(){
    cout<<"Hour is: "<<hour<<endl;
    cout<<"Min is: "<<minutes<<endl;
  }
  void HourtoMin(){
    cout<<"Hour to Mins :"<<hour*60 + minutes<<endl;
  }
};

int main(){
  /*
  Time t1(10,24);
  t1.display();
  Time t2(10,46);
  t2.display();
  Time t3;
  t3 = t1.add(t2);
  */
  Time t1(200);
  Time t2(350);
  Time t3;
  t3 = t1.addMinutes(t2);
  t3.HourtoMin();
  return 0;
}