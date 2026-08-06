#include<iostream>
using namespace std;


int simpleInterest(){
    int p,r,t;
    cout<<"\nenter principle amt :";
    cin>>p;
    cout<<"enter rate of interest :";
    cin>>r;
    cout<<"enter time :";
    cin>>t;
    cout<<"\nsimple interest is: "<<(p*r*t)/100;
    cout<<"\namount to be paid :"<< p + (p*r*t)/100<<endl; 
    return 0;
}

int switchCalc(){
    int num1,num2;
    cout<<"enter num1 :";
    cin>>num1;
    cout<<"enter num2 :";
    cin>>num2;
    char ch;
    cout<<"enter char :";
    cin>>ch;
    switch (ch){
        case '+':
            cout<<"sum of num1 + num2 is :"<<num1+num2<<endl; 
            break;
        case '-':
            cout<<"sub of num1 - num2 is :"<<num1-num2<<endl; 
            break;
        case '*':
            cout<<"product of two num is :"<<num1*num2<<endl;
            break;
        case '/':
            cout<<"division of two num num1/num2 is :"<<num1/num2<<endl;
            break;
        case '%':
            cout<<"modulus of two num is :"<<num1%num2<<endl; 
            break;
        default :
            cout<<"invalid input";
    }
    return 0;
}


int swapTwoNum(){
    int num1,num2;
    cout<<"enter num1 :";
    cin>>num1;
    cout<<"enter num2 :";
    cin>>num2;
    // swapping two num without 3rd var
    num1= num1+num2;
    num2=num1-num2;
    num1=num1-num2; 
    cout<<"num1 is :"<<num1<<endl;
    cout<<"num2 is :"<<num2<<endl;
    // using 3rdd var
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout<<"num1 is :"<<num1<<endl;
    cout<<"num2 is :"<<num2<<endl;
    return 0;
}


int main(){
    cout<<"hello pw";
    cout<<endl; // endl endline move cursor to next line
    cout<<"we r studying cpp\n";
    // "\n" work same as endl
    cout<<"hello"<<"\n"<<"nice keep going\n";
    int x=5,y=6; // declaration and initialization work same as c
    int sum=x+y;
    cout<<sum<<endl;
    
    // ternary operator condition? exp1 True : exp2 False
    // (num%2==0) ? cout<<"even" : cout<<"odd";
    
    int arr1[5]={1,5,7,9,4};
    
}