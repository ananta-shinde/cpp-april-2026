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

int LastIndexOf(char* str,char search)
{
    int index = -1;
    int i=0;
    while(*str){
        if(*str == search){
            index = i;
        }
        str++;
        i++;
    }
    return index;
}

int indexOf(char* str,char search)
{
    int index = -1;
    int i=0;
    while(*str){
        if(*str == search){
            return i;
        }
        str++;
        i++;
    }
    return index;
}

void strcat(char* dest,char* src){
   
    while(*dest){
        dest++;
    }
    while(*src){
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
   
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
    // printf("%d\n",strlen(demostring));
    // printf("%d\n",strcmp(demostring,anotherstring));
    // strcat(demostring,anotherstring);
    printf("%d",indexOf(demostring,'A'));

    return 0;
}
