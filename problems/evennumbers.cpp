// accept a number from user and print if it is even or odd

#include<stdio.h>
int main(){

    int n1;
    printf("enter a number :");
    scanf("%d",&n1);
    if(n1%2 == 0)
    printf("number is even");
    else
    printf("number is odd");

}