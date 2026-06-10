#include<iostream>
#include<vector>
using namespace std;

class Syllabus{
    public:
    vector<string> topics;
};

class Subject{

    int id;
    string name;
   

    public:
     Syllabus syllabus;
     Subject(int id,string name){
         this->id = id;
         this->name = name;
    }

};


class Course{
    int id;
    
    public:
    string name;
    vector<Subject*> subjects;

    Course(int id,string name){
         this->id = id;
         this->name = name;
    }
    int getId(){
        return id;
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

class CourseManager{
   
    vector<Course> courselist; 

    public:
    void CreateNewCourse(){
        string name;
        cout<<"enter course name:";
        cin>>name;
        Course* course = new Course(courselist.size()+1,name);
        cout<< "to save course you must add atleast one subject to it"<<endl;
        cout<<"enter subject name:";
        cin>> name;
        Subject* subject =new Subject(course->subjects.size()+1,name);
        cout<< "to save subject you must add atleast one topic to it"<<endl;
        cout<<"enter topic name:";
        cin>> name;
        subject->syllabus.topics.push_back(name);
        course->subjects.push_back(subject);
    }

    void printCourseDetails(int id){
        for(auto itr=courselist.begin();itr != courselist.end();itr++)
        {
            if(itr->getId() == id){
                cout<< "name of course :"<<itr->name;
                // for(Subject* sitr=itr->subjects.begin();sitr != itr->subjects.end();sitr++)
                // {
                //     cout<<sitr->syllabus
                // }
            }
        }
    }
};

int main(int argc, char const *argv[])
{
   // create new course
  

    return 0;
}
