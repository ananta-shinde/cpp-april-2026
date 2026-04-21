#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num = 1;
    printf("%d\t",num);
    for(num;num<=100;num=num+num){
        if(num+num < 100)
         printf("%d\t",num+num);
    }
   
    
    return 0;
}
