#include<stdio.h>

int strlen(char* str){
     int count = 0;
    while(str[count] != '\0'){
        count++;
    }
    return count-1;
}

int strcmp(char* str1,char* str2)
{
    int res = 0;
    for(int i=0;i<strlen(str1);i++){
          if(str1[i]- str2[i] == 0){
            continue;
          }else{
            return str1[i]- str2[i];
          }
    }
    return res;
}

void strcat(char* str1,char* str2){
    char result[40];
    int i=0;
    int j=0;
    int k=0;
    while(true){
        if(j<strlen(str1)){
            result[i] = str1[j];
            j++;
            i++;
        }else if(k < strlen(str2)) {
            result[i] = str1[k];
            k++;
            i++;
        }else{
            result[i] = '\0';
            break;
        }
    }

    str1=result;

   
}



int main(int argc, char const *argv[])
{
    char demostring[20];
    char anotherstring[20];
    printf("enter a string");
    // scanf("%s",demostring);
    fgets(demostring,20,stdin);
     printf("enter a string");
    // scanf("%s",demostring);
    fgets(anotherstring,20,stdin);
    printf("%d\n",strlen(demostring));
    printf("%d\n",strcmp(demostring,anotherstring));
    strcat(demostring,anotherstring);
    printf("%s",demostring);

    return 0;
}
