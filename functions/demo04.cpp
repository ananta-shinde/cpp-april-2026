#include<stdio.h>

int largestofArray(int nums[],int size){
    int largest = nums[0];
    for(int i=1;i<size;i++){
        if(nums[i]>largest)
        {
            largest = nums[i];
        }
    }
    return largest;
}

int sumOfArray(int nums[],int size){
    int sum = 0;
    for(int i=0;i<size;i++){
        sum =nums[i]+sum;
    }
}

int avgOfarray(int nums[],int size){
    int sum = sumOfArray(nums,size);
    return sum/size;
}



int main(int argc, char const *argv[])
{
    int size;
    printf("enter size collection :");
    scanf("%d",&size);
    int nums[size];
   
   
    for(int i=0;i<size;i++){
        printf("eneter a number :");
        scanf("%d",&nums[i]);
    }

    // int largest = nums[0];
    // for(int i=1;i<size;i++){
    //     if(nums[i]>largest)
    //     {
    //         largest = nums[i];
    //     }
    // }

    

    printf("largest number is: %d",largestofArray(nums,size));
   
    
    return 0;
}
