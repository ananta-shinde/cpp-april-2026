// accpet three numbers from user and print larget among them

#include<stdio.h>
int main(){

    int n1,n2,n3;
    printf("enter a number :");
    scanf("%d",&n1);
    printf("enter a number :");
    scanf("%d",&n2);
     printf("enter a number :");
    scanf("%d",&n3);

    if(n1>n2 && n1>n3)
    printf("%d",n1);
    else if(n2>n1 && n2>n3)
    printf("%d",n2);
    else
    printf("%d",n3);
}