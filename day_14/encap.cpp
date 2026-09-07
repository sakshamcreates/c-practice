#include <iostream>
using namespace std;

class BankAccount{
    private:
    string accountnumber;
    double balance;


    public:

    BankAccount(string accNum,double initialBalance){
        accountnumber= accNum;
        balance = initialBalance;
    }

    //getter
    double getBalance()const{
        return balance;
    }
     //method to deposit money
     void deposit(double amount){
        if(amount > 0){
            balance+= amount;
        }

        else{
            cout<<"invalid deposit amount";
        }
     }   

     void withdraw(double amount){
        if(amount > 0 && amount <= balance){
            balance -=amount;

        }
        else{
            cout<<"invalid withdrawn amount "<<endl;
        }
     }

};



int main(){
     BankAccount myAccount("1229988",500);
     myAccount.getBalance();
     myAccount.deposit(200);
      
      
      myAccount.withdraw(100);


}