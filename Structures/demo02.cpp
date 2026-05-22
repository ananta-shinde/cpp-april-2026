#include<stdio.h>
struct Student
{
    int rollNo;
    char name[40];
    float phy;
    float chem;
    float math;
};

void acceptStudentDeials(Student* s){
    
    printf("enter name :");
    fgets(s->name,40,stdin);
    printf("enter rollno :");
    scanf("%d",&s->rollNo);
    printf("enter marks for phy :");
    scanf("%f",&s->phy);
    printf("enter marks for chem :");
     scanf("%f",&s->chem);
    printf("enter marks for math :");
     scanf("%f",&s->math);
}

void printStudentDetails(Student* s){
    printf("rollno: %d, name :%s, phy: %f, chem:%f, maths:%f\n",s->rollNo,s->name,s->phy,s->chem,s->math);
}

int main(int argc, char const *argv[])
{
    Student* list[3];

    // create new student
    for(int i=0;i<3;i++){
        Student s;
        acceptStudentDeials(&s);
        list[i] = &s;
    }
    
    // printing list students
    for(int i=0;i<3;i++){
        printStudentDetails(list[i]);
    }
    

    
    return 0;
}
