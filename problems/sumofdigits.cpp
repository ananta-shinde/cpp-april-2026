#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("enter a number :");
    scanf("%d",&num);

    int sum  = 0;
   
    
         while(num != 0){
            int r = num%10;
            count = count+1;
            num = num/10;
        }
    
   
    printf("no of digits is :%d",count);
    return 0;
}