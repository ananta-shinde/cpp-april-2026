#include<stdio.h>

void demofun(){
    printf("this is on demand statement\n");
}

void repaeatable(){
    for(int i=0;i<4;i++){
        demofun();
        printf("this is repaeatable statment\n");
    }
}

void addition(int a,int b){
    printf("%d",a+b);
}

void swap(int* a,int* b){
     int temp = *a;
     *a=*b;
     *b=temp ; 
}




