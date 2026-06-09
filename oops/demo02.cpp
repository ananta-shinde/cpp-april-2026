#include<iostream>
using namespace std;

class Syllabus{
    public:
    string topic[10];
};


class Course{
    int id;
    
    public:
    string name;
    Syllabus* content;

    Course(int id,string name){
         this->id = id;
         this->name = name;
    }
};

class Student{
    int rollNo;
    string name;
    public:
    Course* mycourse;

    Student(int rollNo,string name){
        this->rollNo = rollNo;
        this->name = name;
    }

    int getRollNo(){
        return rollNo;
    }

    string getName(){
        return name;
    }

    void setName(string name){
        name = name;
    }


};

int main(int argc, char const *argv[])
{
   Course* c1 = new Course(100,"C++");
   Student* s1 = new Student(1010,"Ananta");
   s1->mycourse = c1;
   cout<< "roll no:"<<s1->getRollNo()<< "name:"<<s1->getName()<<endl;
   cout<< "Course :"<< s1->mycourse->name;

    return 0;
}
