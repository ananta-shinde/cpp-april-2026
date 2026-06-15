#include<iostream>
using namespace std;
class User{
 int id;
 public:
     string name;
     string email;
     string address;
};
class Teacher:public User{
    
};

class College{
    public:
     string name;
     string email;
     string address;
};

class Student:public User{
   
};

class App{
    public:
    void printDetails(User* s){
          cout<<s->name << " "<< s->email;
    };
    void printDetails(College* s){
      cout<<s->name << " "<< s->email;
    };

};

int main(int argc, char const *argv[])
{
    App* app = new App();
    College* college = new College();
    Student* s = new Student();
    Teacher* t = new Teacher();
    User* u = new User();
    s->name = "Ananata";
    s->email = "demo@gmail.com";
    app->printDetails(s);
    app->printDetails(t);
    app->printDetails(u);
    app->printDetails(college);

    return 0;
}
