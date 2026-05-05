#include<stdio.h>


int addNumbers(int nums[],int count){
    int sum = 0;
    for(int i=0;i<count;i++){
        sum=nums[i]+sum;
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    int size;
    printf("enter no of values :");
    scanf("%d",&size);
    int numbers[size];
   
   for(int i=0;i<size;i++){
     printf("enter a number:");
    scanf("%d",&numbers[i]);
   }
    // int length = sizeof(numbers)/sizeof(int);
    int result = addNumbers(numbers,size);
    printf("%d",result);
    return 0;
}
