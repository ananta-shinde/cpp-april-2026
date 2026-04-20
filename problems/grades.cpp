#include<stdio.h>
int main(int argc, char const *argv[])
{
    float marks;
    printf("enter your marks in percentage :");
    scanf("%f",&marks);
    if(marks>90)
    printf("your grage is A\n");
    else if(marks>75)
    printf("your grage is B\n");
    else if(marks>50)
    printf("your grage is C\n");
    else
    printf("your grage is F\n");
    return 0;
}
