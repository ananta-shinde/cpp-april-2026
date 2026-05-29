#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    // int nums[5];
    int* nums; 
    // nums =(int *) malloc(20);
    nums =(int *) calloc(5,sizeof(int));

    nums[0] = 20;
    nums[1] = 50;
    realloc(nums,28);
    nums[6] = 40;
    printf("%d%d",nums[0],nums[6]);
    

    return 0;
}
