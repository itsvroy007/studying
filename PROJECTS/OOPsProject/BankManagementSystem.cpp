#include<iostream>
#include<string>
using namespace std;

/* feature that will be present in banking sys
Create a bank account
View account details
Deposit money
Withdraw money
Check balance
Transfer money between accounts
Close an account
Display all accounts
Search for an account
Transaction history
*/


class Bank{
private:

public:
  void createAccount(){

  }
  void searchAccount(int AccNum){
    
    return ;
  }
  void CloseAcc(int AccNum){

  }

  void displayAllAccount(){

  }
  void transferMoney(int Acc1,int Acc2,int amt){// transfer funds from Acc1 to Acc2
    
  }
};

class Account{
private:
  int CustomerID;
  int AccountNumber;
  string CustomerName;
  float Balance;
  string AccountType;
  int PhoneNumber;
public:
  Account(){
  }
  Account(int CustId,int AccNum,string CustName,float Bal,string AccType,int PhNum){
    CustomerID = CustId;
    AccountNumber =AccNum;
    CustomerName = CustName;
    Balance = Bal;
    AccountType =AccType;
    PhoneNumber = PhNum;
  }

  float deposit(float dep){
    if(dep <=0){
      cout<<"Deposit must be greater than 0 "<<endl;
      cout<<"Deposit Failed!!"<<endl;
      return -1;
    }
    Balance += dep;
    cout<<"Deposit SuccessFully"<<endl;
    return Balance;
  }
  float withdraw(float wdr){
    if(wdr>Balance ){
      cout<<"Withdrawl amount cant be greater than balance"<<endl;
      return -1; 
    }
    else if(wdr<=0){
      cout<<"Withdrawl cant be -ve or 0"<<endl;
      return -1;
    }
    Balance -= wdr;
    cout<<"Withdrawal SuccessFully"<<endl;
    return Balance;
  }
  
  void displayDetails(){
    cout<<"Customer ID: "<<CustomerID<<endl;
    cout<<"Account Holder Name: "<<CustomerName<<endl;
    cout<<"Account Number: "<<AccountNumber<<endl;
    cout<<"Phone Number: "<<PhoneNumber<<endl;
    cout<<"Account Type: "<<AccountType<<endl;
    cout<<"Balance: "<<Balance<<endl;
  }
  float getBalance(){
    return Balance;
  }

};

class Transfer{
private:
    int TransactionID;
    string Transactiontype; // deposit/withdrawal/transfer
    float Amount;
    //Date/time
    int SenderAccountNum;
    int ReceiverAccountNum;
public:
  

};
int main(){
  
  return 0;
}