#include<iostream>
using namespace std;

class Creatures{
    public:
    virtual void eat() = 0;
    virtual void talk() = 0;
    virtual void walk() = 0;
};

class Animals:public Creatures{
   
       
};

class Humans :public Animals{

    void eat(){
        cout << "eat with their hands"<<endl;
    }
    void talk(){
        cout << "speaks human languages"<<endl;
    }
    void walk(){
        cout << "walk with two feet"<<endl;
    }
};

class Dog :public Animals{

    void eat(){
        cout << "eat without hands"<<endl;
    }
    void talk(){
        cout << "barks with mouth"<<endl;
    }
    void walk(){
        cout << "walk with four feet"<<endl;
    }
};

class Birds:public Creatures{
      
};

class Crow:public Birds{
   void eat(){
        cout << "eat without peek"<<endl;
    }
    void talk(){
        cout << "chirping"<<endl;
    }
    void walk(){
        cout << "fly"<<endl;
    }
};

int main(int argc, char const *argv[])
{
    Animals* ptr = new Humans();
    ptr->eat();
    ptr = new Dog();
    ptr->eat();
    return 0;
}
