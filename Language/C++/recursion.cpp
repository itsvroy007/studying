#include<iostream>
using namespace std;

// recursion -> performing loops without using for while

int factorial(int num){
    if (num==0 or num ==1 ) return 1;
    return num * factorial(num-1);
}

int PnC(){
    // permutation and combination
    // nPr = n !/(n-r)! and nCr = n! / (r! * (n-r)! or nPr / r!
    int n,r;
    cout<<"enter n :";
    cin>>n;
    cout<<"enter r :";
    cin>>r;
    int permutation = factorial(n) / factorial(n-r);
    int combination = permutation / factorial(r) ;
    cout<<"the permutation of n and r is "<<permutation<<endl;
    cout<<"the combination of n and r is "<<combination<<endl;
    return 0;
}

int SumOfNaturalNum(int num){// recursion
    // int natural_sum = (num * (num+1))/2   // odd natural num sum= num * num
    if (num == 1) return 1;
    return num + SumOfNaturalNum(num-1);
    // sum =0 for(int i =1;i<=num;i++) sum=sum+i  
    return 0;
}

int power(int a,int b){// recursion
    // a raised to power b
    if(b==0) return 1;    
    return a*power(a,b-1);
    // loops -> output=1 for(int i=b;i>0;i--) output= ouput*a
    return 0;
}

int fibo(int n_term){// recursion
    // to print nth term of fibo
    if(n_term==1 or n_term==2) return 1;
    return fibo(n_term-1)+fibo(n_term-2);
    return 0;
}

int main(){
  cout<<"hello"<<endl;
}