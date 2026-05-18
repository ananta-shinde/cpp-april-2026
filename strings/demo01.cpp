#include<stdio.h>
int main(int argc, char const *argv[])
{
    char name[40];
    char lastname[40];
    printf("enter your name :");
    scanf("%[^\n]s",&name);
    scanf("%s",&lastname);
    printf("%s %s",name,lastname);
    return 0;
}
