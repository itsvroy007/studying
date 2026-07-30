#include<iostream>
using namespace std;

int table(){
    int num;
    cout<<"enter the num :";
    cin>>num;
    for(int i=1;i<11;i++){
        cout<<num<<" x "<<i<<" = "<<num*i<<endl;
    }
    return 0;
}

int displayOfAP(){
    int first_term,comm_diff,numOfterms;
    cout<<"enter 1st term :";
    cin>>first_term;
    cout<<"enter comm_diff :";
    cin>>comm_diff;
    cout<<"enter num of terms :";
    cin>>numOfterms;
    int temp = first_term;
    for(int i=1;i<=numOfterms;i++){
        cout<<temp<<" ";
        temp=temp+comm_diff;
    }
    /*
    for(int i=first term;i<=last_term;i+/-=comm_diff){
        cout<<i<<" ";
    }
    */
    return 0;
}

int displayOfGP(){
    int first_term,comm_ratio,numOfterms;
    cout<<"enter 1st term :";
    cin>>first_term;
    cout<<"enter comm_ratio :";
    cin>>comm_ratio;
    cout<<"enter num of terms :";
    cin>>numOfterms;
    int temp = first_term;
    for(int i=1;i<=numOfterms;i++){
        cout<<temp<<" ";
        temp=temp*comm_ratio;
    }
    return 0;
}

int factorsOfNum(){
    int num;
    cout<<"enter num :";
    cin>>num;
    int factor=1;
    for(int i=1;i<=num/2;i++){ //i<=num for all factors 
        if(num%i==0){
            cout<<i<<" ";
        }
        factor=i;
    }
    cout<<"\nThe 2nd highest factor is :"<<factor;
    return 0;
}

int countDigit(){
    int num;
    cout<<"enter your num :";
    cin>>num;
    int count=0;
    while(num>0){
        num=num/10;
        count++;
    }
    cout<<"the total digit in num is :"<<count;
    return 0;
}

int sumOfDigit(){
    int num;
    cout<<"enter your num :";
    cin>>num;
    int sum=0;
    while(num>0){ 
        // for even digit sum -> rem=num%10 if (rem%2==0) then sum=sum+rem
        sum= sum + num%10;
        num=num/10;
    }
    cout<<"the sum of digit of num is :"<<sum;
    return 0;
}

int productOfDigit(){
    int num ,rem,prod=1;
    cout<<"enter your num :";
    cin>>num;
    if(num<=0){
        cout<<"enter number greater than 0";
    }
    while(num>0){
        rem=num % 10;
        if(rem!=0){
            prod = prod*rem;
        }
        num=num/10;
    }
    cout<<"the product of digit of num is :"<<prod;
    return 0;
}

int is_CompositeOrPrime(){
    int num;
    cout<<"enter num :";
    cin>>num;
    bool flag = true; // letting it is a prime 
    if(num==1) cout<<"Neither prime nor composite"<<endl;
    else if(num<=0) cout<<"wrong input"<<endl;
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            flag = false ;
            cout<<"it is composite num"<<endl;
            break;
        }
        else cout<<"it is a prime num"<<endl;
        break;
    }
    return 0;
} 

int reverseNum(){
    int num,rev=0,rem;
    cout<<"enter your num :";
    cin>>num;
    int temp_num=num;
    while(num>0){
        rem=num%10;
        rev = rev*10 +rem ;
        num=num/10;
    }
    cout<<"the reverse of org num is :"<<rev<<endl;
    if(temp_num == rev){
        cout<<"it is a palindrome"<<endl;
    }
    return 0;
}

int AsciiValue(){
    // for all alphabet A = 65 ,a = 97 , 0 char = 48
    for(int i=65;i<=122;i++){
        cout<<"Ascii vale of "<<(char)i<<" is "<<i<<endl;
    }
    return 0;
}

int fibonnaciSeries(){
    int a=1,b=1;
    int n_term,sum;
    cout<<"enter num of terms to be printed :";
    cin>>n_term;
    sum = a + b;
    cout<<a<<" "<<b;
    for(int i=1;i<=n_term-2;i++){
        cout<<" "<<sum;
        a=b;
        b=sum;
        sum=a+b;
    }
    return 0;
}

int main(){
  cout<<"how r u"<<endl;
}