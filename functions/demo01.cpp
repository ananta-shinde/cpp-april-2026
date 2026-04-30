#include<stdio.h>
#include "common.h"

int main()
{
    printf("this is normal statement\n");
    demofun();
    if(false){
        demofun();
        printf("this is skipped statement\n");
    }
    
    
   
    
    return 0;
}
