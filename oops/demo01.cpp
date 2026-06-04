#include<stdio.h>
#include<string.h>
#include<stdlib.h>
class User{
    private:
    int id;
    char name[40];
    char email[40];

    public:

    User(int count){
        id = count; 
    }

    // print user
    void print(){
        printf("id:%d,name:%s,email:%s\n",id,name,email);
    }

    int getId(){
        return id;
    }

    char* getName(){
        return name;
    }

    void setName(char* name){
          name = name;
    }

    //
};

class UserManager{
    private:
    // User* userlist[5];
    User** userlist = NULL;
    int count = 0;
  
    public:
   // add user
   void add(User* u)
   {
       if(count == 0){
       userlist =(User**)calloc(count+1,sizeof(User*));
       }else{
        userlist =(User**) realloc(userlist,(count+1)*sizeof(User*));
       }
        userlist[count] = u;
        count++;
   }
   // remove user
   void remove(){

   }
   // update user
   // print list users
   void printList(){
    if(count == 0){
        printf("list is empty");
    }else{
        for(int i=0;i<count;i++){
            userlist[i]->print();
        }
    }
   }

   int getCount(){
    return count;
   }


};

int main(int argc, char const *argv[])
{
   // Userlist
   UserManager* um = new UserManager();
   User* u  = new User(um->getCount()+1);
   um->add(u);
   u  = new User(um->getCount()+1);
   um->add(u);
   um->printList();
  
}
