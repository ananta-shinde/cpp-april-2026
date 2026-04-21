#include<stdio.h>
int main()
{
   for(int num = 60;num<=160;num++){
     if(num%5 == 0 && num%4 == 0)
      printf("%d\t",num);
   }
    return 0;
}