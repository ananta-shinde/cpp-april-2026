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
    
    printf("enter student details :");
    printf("enter rollno :");
    scanf("%d",&s->rollNo);
    //  printf("enter name :");
    // scanf("% s",s->name);
    printf("enter marks for phy :");
    scanf("%f",&s->phy);
    printf("enter marks for chem :");
     scanf("%f",&s->chem);
    printf("enter marks for math :");
     scanf("%f",&s->math);
}

void addStudent(Student* list[], int* count){
     
        if(*count<3){
        Student* s= new Student();
        acceptStudentDeials(s);
        list[*count] = s;
        *count = *count+1;
        }
        else
        {
           printf("can not insert new student, list is full");
        }
        
}


void printStudentDetails(Student* s){
    printf("rollno: %d,  phy: %f, chem:%f, maths:%f\n",s->rollNo,s->phy,s->chem,s->math);
}

void printStudentList(Student* list[], int count){

     for(int i=0;i<count;i++){
        printf("%d\n",count);
        printStudentDetails(list[i]);
    }
}

int main(int argc, char const *argv[])
{
    Student* list[3];
    int count = 0;

    // create new student
   addStudent(list,&count);
   addStudent(list,&count);
  
   printf("%d\n",count);
    
   // printing list students
    printStudentList(list,count);
    

    
    return 0;
}
