#include<stdio.h>
int main(int argc, char const *argv[])
{
    char email[20];
    printf("enter your email:");
    scanf("%s",&email);
    // validate
    int isAtPresent = 0;
    int atpresentindex = -1;
    int isDotPresesnt = 0;
    int dotPresentindex = -1;
    int isAtduplicate = 0;
    for(int i=0;email[i]!='\0';i++){
       if(email[i] == '@'){
        if(atpresentindex != -1){
            isAtduplicate = 1;
        }
         isAtPresent = 1;
         atpresentindex = i;
       }
       if(email[i] == '.'){
         isDotPresesnt = 1;
         dotPresentindex = i;
       }
    }

    if( isAtduplicate == 0 && isAtPresent == 1 && isDotPresesnt == 1 and atpresentindex < dotPresentindex)
       {
         printf("email is valid\n");
       }else{
         printf("emial is not valid\n");
       }
    
    return 0;
}
