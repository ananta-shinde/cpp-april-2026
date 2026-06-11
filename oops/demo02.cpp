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

    string getName(){
        return name;
    }

};


class Course{
    int id;
    
    public:
    string name;
    vector<Subject*> subjects;
    int count = 0;
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
    Course** mycourse;

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
   
    vector<Course*> courselist; 

    public:
    void createNewCourse(){
        string name;
        cout<<"enter course name:";
        cin >> name;
        Course* course = new Course(courselist.size()+1,name);
        cout<< "to course  it must have atleast subject:"<<endl;
        char subchoice;
        do{
            cout<<"enter subject name:";
            cin >> name;
            Subject* subject = new Subject(course->count+1,name);
            cout<< "to create subject it must have atleast one topic :"<<endl;
            char choice ;
            do {
                cout<<"enter topic name:";
                cin >> name;
                subject->syllabus.topics.push_back(name);
            

                cout<<"want to add more tiopics(Y/N):";
                cin >> choice;
            }while(choice =='Y');

            course->subjects.push_back(subject);

            cout<<"want to add more subjects(Y/N):";
            cin >> subchoice;
        } while(subchoice == 'Y'); 

        courselist.push_back(course);

    }

    void printCourseDetails(int id){
        
      for(int i=0;i<courselist.size();i++){
        if(courselist[i]->getId() == id){
            Course* course = courselist[i];
            cout << "course details:"<<endl;
            cout << course->name;
            cout <<" subjects :"<<endl;
            course->subjects;
            for(int j=0;j<course->subjects.size();j++){
                  cout << course->subjects[j]->getName();
            }

        }
        
      }
    }
};

int main(int argc, char const *argv[])
{
   // create new course
   CourseManager cm;
//    cm.createNewCourse();
   cm.printCourseDetails(1);

    return 0;
}
