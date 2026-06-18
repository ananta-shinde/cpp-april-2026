#include<iostream>
#include<vector>
using namespace std;

class User{
    public:
     int id;
    string name;
    string contact;
    string email;
    Address address;
};

class Address{
    string landmark;
    string city;
    string state;
    string  country;
    string pincode;
};

class Bank{
    private:
    int id;
    string name;
    string contact;
    string email;
    Address address;
    vector<Account> accounts;

    public:
    // getAccountList
    // getAccountByccountNo
    // Create Account
    // Close Account
    // get Customer list

};

class Account{
    int accNo;
    double balance;
    vector<Transaction> transactions;
    Customer* customer;

    public:
    // deposit
    // withdraw
    // check balance
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

class Employee: public User{
   Bank* bank= NULL;
   //
};





int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
