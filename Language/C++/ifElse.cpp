#include<iostream>
using namespace std;

int perimeterAndAreaOfFigures(){
    cout<<"choice the figures by entering num "<<endl;
    cout<<"1. CIRCLE circumference n AREA\n";
    cout<<"2. Square perimeter n area\n";
    cout<<"3. Rectangle perimeter n area\n";
    cout<<"4. Triangle perimeter n area\n";
    int choice;
    cin>>choice;
    if(choice == 1){
    // area of circle
    int radius ;
    cout<<"enter circle radius : ";
    cin>>radius;
    cout<<"area of circle is "<< 3.14*radius*radius<<endl;
    cout<<"circumference is " << 2*3.14*radius<<endl;
    }
    else if(choice == 2){
    // area of square
    int side ;
    cout<<"enter sq side : ";
    cin>>side;
    cout<<"area of square is "<< side*side<<endl;
    cout<<"perimeter of sq is "<< 4*side<<endl;
    }
    else if(choice == 3){
    // area of rectangle
    int length,breadth ;
    cout<<"enter length of rect : ";
    cin>>length;
    cout<<"enter breadth of rect : ";
    cin>>breadth;
    cout<<"area of rectangle is "<< length*breadth <<endl;
    cout<<"perimeter of reactangle is "<< 2*(length+breadth)<<endl;
    }
    else if(choice == 4){
    // area of triangle
    int base, height ;
    cout<<"enter base of rect : ";
    cin>>base;
    cout<<"enter height of rect : ";
    cin>>height;
    cout<<"area of triangle is "<< (float)(base*height)/2 <<endl;
    //cout<<"perimeter of triangle is "<< side1+side2+side3 <<endl;
    }
    else cout<<"wrong choice"<<endl;
    return 0;
}

int oddEven(){
    int num;
    cout<<"\nenter your num :"<<endl;
    cin>>num;
    if(num%2==0){
        cout<<"entered num is even"<<endl;
    }
    else cout<<"entered num is odd";
    return 0;
}

int absoluteNum(){
    // absolute num --> same as modulus in maths 
    int num1;
    cout<<"\nenter your num1 :";
    cin>>num1;
    if(num1<0){
        // change value in num1 --> num1 = -(num1)
        cout<<"absolute num1 is :"<< -(num1)<<endl;
    }
    else cout<<"absolute num1 is :"<<num1<<endl;
    return 0;
}

int profitloss(){
    float cp,sp;
    cout<<"enter the cost price of item :";
    cin>>cp;
    cout<<"enter the selling price of item :";
    cin>>sp;
    if(sp>cp){
        float profit = sp-cp;
        cout<<"profit made is :"<< profit<<endl;
        cout<<"profit percentage is "<< (profit/cp)*100<<endl;
    }
    else if(cp>sp){
        float loss = cp-sp;
        cout<<"loss faced is :"<< loss <<endl;
        cout<<"loss percentage is "<< (loss/cp)*100<<endl;
    }
    else cout<<"no loss no profit";
    return 0;
}

int validTriangle(){
    // rule -> sum of any 2 side > 3rd side 
    int side1,side2,side3;
    cout<<"enter len of side1 :"<<endl;
    cin>>side1;
    cout<<"enter len of side2 :"<<endl;
    cin>>side2;
    cout<<"enter len of side3 :"<<endl;
    cin>>side3;
    if(side1+side2>side3 and side2+side3>side1 && side3+side1>side2){
        cout<<"it is a valid triangle\n";
    }
    else cout<<"invalid triangle";
    return 0;
}

int greatestNum(){ // for least just change > to < less than symbol
    int num1,num2,num3;
    cout<<"enter num1 :";
    cin>>num1;
    cout<<"enter num2 :";
    cin>>num2;
    cout<<"enter num3 :";
    cin>>num3;
    if(num1 > num2 and num1 > num3){
        cout<<"max num is :"<<num1<<endl;
    }
    else if(num2 > num1 and num2 > num3){
        cout<<"max num is :"<<num2<<endl;
    }
    else if(num3>num1 && num3>num2){
        cout<<"max num is :"<<num3<<endl;
    }
    else if(num1==num2 and num1==num3){
        cout<<"all num are equal\n";
    }
    return 0;
}

int grading(){
    int marks;
    cout<<"enter your marks :";
    cin>>marks;
    if(marks>80){
        cout<<"Grade A \n Very Good";
    }
    else if(marks>60 and marks<=80){
        cout<<"Grade B \n Good";
    }
    else if(marks>40 and marks<=60){
        cout<<"Grade C \n Average";
    }
    else if(marks>0 and marks<=40){
        cout<<"Grade D \n Fail";
    }
    else cout<<"wrong input";
    return 0;
}

int quadrant(){
    int x,y;
    cout<<"enter the x :";
    cin>>x;
    cout<<"enter the y :";
    cin>>y;
    if(x>0 and y>0){
        cout<<"1st quadrant";
    }
    else if(x<0 and y>0){
        cout<<"2nd quadrant";
    }
    else if(x<0 and y<0){
        cout<<"3nd quadrant";
    }
    else if(x<0 and y<0){
        cout<<"4nd quadrant";
    }
    else if(x==0){
        cout<<"point is on y-axis";
    }
    else if(y==0){
        cout<<"point is on x-axis";
    }
    else cout<<"point is on origin";
    return 0;
}

int main(){
  cout<<"hello"<<endl;
}