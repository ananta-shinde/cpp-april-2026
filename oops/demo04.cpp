#include<iostream>
using namespace std;

class Shape{

    public:
    virtual void calculateArea(){
      
    }

    virtual void calculateArea(int l,int b){
        
    }

    virtual void calculateArea(int radius){
     }

};

class Rectangle:public Shape{

    public:
    void calculateArea(int l,int b){
        int area = l*b;
        cout<<"area of rectangle:"<<area<<endl;
    }

};

class Circle:public Shape{

    public:
    void calculateArea(int radius){
        int area = 3.14*radius*radius;
        cout<<"area of circle:"<<area<<endl;
    }

};


int main(int argc, char const *argv[])
{
    Shape* rect = new Rectangle();
    // Circle* ptr = new Shape();
    rect->calculateArea(20,23);
    rect= new Circle();
    rect->calculateArea(100);
    return 0;
}
