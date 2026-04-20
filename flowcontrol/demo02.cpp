#include<stdio.h>
int main(int argc, char const *argv[])
{
    
    switch ('A')
    {
    case 'A': printf("case 1 is executed\n");
    break;
    case 2: printf("case 2 is executed\n");
    break;
    case 3: printf("case 3 is executed\n");
    break;
    case 4: printf("case 4 is executed\n");
    break;
    default : printf("compusary when no case matches");
    }
    return 0;
}
