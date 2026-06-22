#include<iostream>
#include<vector>
using namespace std;

class Account;

class Address{
    string landmark;
    string city;
    string state;
    string  country;
    string pincode;
};
class User{
    public:
     int id;
    string name;
    string contact;
    string email;
    Address address;
};

class Transaction{
    string type;
    double amount;
};

class Customer: public User{
   Account* account = NULL;
   public:
   // view account
   // initiate transactions
};

class Account{
      public:
    int accNo;
    double balance;
    vector<Transaction> transactions;
    Customer* customer;

  
    // deposit
    void deposite(double amount){
        balance = balance + amount;
    }
    // withdraw
     void withdraw(double amount){
        if(balance >0){
        balance = balance - amount;
        }
    }
    // check balance
    double checkbalance(){
        return balance;
    }
};




class Bank{
    private:
    int id;
    string name;
    string contact;
    string email;
    Address address;
    vector<Account*> accounts;

    public:
    // getAccountList
    void getAccountList(){
        for (Account* ptr : accounts) {
            if (ptr != nullptr) {
                cout<<"acc no: "<<ptr->accNo<<" name: "<<ptr->customer->name<<endl;
            }
        }
    }
    // getAccountByccountNo
    Account* getAccount(int accno){
        for(Account* ptr:accounts){
            if(ptr->accNo == accno){
                return ptr;
            }
        }
        return NULL;
    }

    // Create Account
    void createAccount(){
        Account* acc = new Account();
        acc->accNo = 100100;
        acc->balance = 0;
        acc->customer = new Customer();
        cout<< "enter customer name";
        cin>> acc->customer->name;
        cout<< "enter customer email";
        cin>> acc->customer->email;
        cout<< "enter customer contact";
        cin>> acc->customer->contact;
        
        accounts.push_back(acc);

    }
    // Close Account
    // get Customer list

    // Requesting for deposite
    void deposite(){
        int accountNo;
        double amount;
        cout<<"enter your account no";
        cin >> accountNo;
        Account* acc = getAccount(accountNo);
        cout<<"enter amount to deposite";
        cin >> amount;
        acc->deposite(amount);
        cout << "deposite successfull"<<endl;
        cout<< "current balance is :"<<acc->checkbalance();
    }

     // Requesting for withdarw
    void withdraw(){
        int accountNo;
        double amount;
        cout<<"enter your account no";
        cin >> accountNo;
        Account* acc = getAccount(accountNo);
        cout<<"enter amount to withdraw";
        cin >> amount;
        acc->withdraw(amount);
        cout << "withdraw successfull"<<endl;
        cout<< "current balance is :"<<acc->checkbalance();
    }

};




class Employee: public User{
   Bank* bank= NULL;
   //
};





int main(int argc, char const *argv[])
{
    Bank* bank = new Bank();
    bank->createAccount();
    // bank->getAccountList();
    bank->deposite();
    bank->withdraw();
    return 0;
}
