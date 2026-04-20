#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("enter your num in range 0 to 9 :");
    scanf("%d",&num);
    
    // if(num == 0)
    // printf("ZERO\n");
    // else if(num == 1)
    // printf("ONE\n");
    // else if(num == 2)
    // printf("TWO\n");
    // else if(num == 3)
    // printf("THREE\n");

    switch(num){
        case 0: printf("ZERO\n");
        break;
        case 1: printf("ONE\n");
        break;
    }
    
    return 0;
}
