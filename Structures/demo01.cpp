#include<stdio.h>
#include<string.h>
struct Student{
    int age;
    char name[40];
    float marks;
};

struct Address
{
    char landmark[100];
    char city[50];
    char state[50];
    char pincode[6];
};


struct Citizen
{
    char name[40];
    int age;
    double income;
    Address address;
};

int main(int argc, char const *argv[])
{
    
    Citizen c1;
    

    return 0;
}
