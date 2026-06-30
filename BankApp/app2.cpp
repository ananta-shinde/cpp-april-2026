#include<iostream>
#include<vector>
#include<fstream>
using namespace std;
class Bank;
class Customer;
class Account;
class Transaction;

class Customer{
    int custid;
    string name;
    string address;

    public:
    Customer(int id){
        custid = id;
    }
    int getCustomerId(){
        return custid;
    }
    string getCustomerName(){
        return name;
    }
    void setCustomerName(string value){
        name = value;
    }
    void setAddress(string add){
        address = add;
    }
    string getAddress(){
        return address ;
    }

};
class Account{
    int accno;
    double balance;
    vector<Transaction> transactions;
    int custId;
    public:

    int getAccountNo(){
        return accno;
    }
    int getCustomerId(){
        return custId;
    }
    void setCustomerId(int id){
        custId = id;
    }

    Account(){
        
    }

    Account(int id){
        accno = id;
        balance = 0;
    }

    double getBalance(){
        return balance;
    }
    void setBalance(double value){
        balance = value;
    }
    
};
class Transaction{
    string message;
    double amount;
    public:
    void printStatement(){
        cout<< message <<" "<< amount<<endl;
    }
};

class Bank{
    vector<Customer> customers;
    vector<Account> accounts;
    public:
    void createaccount(){
        // create an account
        Account acc(accounts.size()+1);

        // create a customer
        Customer customer(customers.size()+1);
        cout<<"enter name :";
        string name;
        cin>>name;
        customer.setCustomerName(name);
        cout<< " enter address";
        string address;
        cin>> address;
        customer.setAddress(address);

        //link account to a customer
        acc.setCustomerId(customer.getCustomerId());

        // persist data
        ofstream outAccount("accounts.bin",ios::binary);
        ofstream outCustomer("customers.bin",ios::binary);
        
        // 1. Write the size of the vector first
        size_t size = accounts.size();
        outAccount.write(reinterpret_cast<const char*>(&size), sizeof(size));

        // 2. Write the data block in one go
        outAccount.write(reinterpret_cast<const char*>(accounts.data()), size * sizeof(Account));

    }
    
    // void deposit(){
    //     int accountNo;
    //     double amount;
    //     cout<<"enter your account no :";
    //     cin>> accountNo;
    //     cout<<"enter your amount :";
    //     cin>> amount;
    //     Account* acc = getAccountByAccNo(accountNo);
    //     acc->setBalance(acc->getBalance()+ amount);
    //     cout<< "account deposited successfully";

    //     // persist data
        
    // }

    // void withdraw(){
    //     int accountNo;
    //     double amount;
    //     cout<<"enter your account no :";
    //     cin>> accountNo;
    //     cout<<"enter your amount :";
    //     cin>> amount;
    //     Account* acc = getAccountByAccNo(accountNo);
    //     acc->setBalance(acc->getBalance()- amount);
    //     cout<< "account deducted successfully";

    //     // persist data
        
    // }

    // Account* getAccountByAccNo(int accountNo)
    // {
    //     for(Account acc:accounts){
    //         if(acc.getAccountNo()==accountNo){
    //             return &acc;
    //         }
    //     }
    //     return NULL; 
    // }

    void getAccountList(){

        ifstream inAccount("accounts.bin",ios::binary);
        ifstream inCustomer("customers.bin",ios::binary);
        // 1. Read the size
        size_t size = 0;
        inAccount.read(reinterpret_cast<char*>(&size), sizeof(size));

        // 2. Resize the vector and read the data block
        std::vector<Account> accounts(size);
        inAccount.read(reinterpret_cast<char*>(accounts.data()), size * sizeof(Account));

        for(Account acc: accounts){
            cout << acc.getAccountNo()<< endl;
        }
    }


};


int main(int argc, char const *argv[])
{
    Bank bank;
    bank.createaccount();
    bank.getAccountList();
    return 0;
}
