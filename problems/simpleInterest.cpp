// to calculate spimple interest

#include<stdio.h>
int main(){

    float p,r,n,si;
    printf("enter your principle amount :");
    scanf("%f",&p);
    printf("enter your rate of interest :");
    scanf("%f",&r);
    printf("enter your period of investment in years :");
    scanf("%f",&n);

    si = (p*r*n)/100;

    printf("principle :%f\n",p);
    printf("interest earned :%f\n",si);
    printf("total amount :%f",si+p);
}