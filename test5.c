#include <stdio.h>
int main()
{
    int age;
    printf("enter your age\n");
    scanf("%d",&age);
    printf("you have enter the %d the age \n", age);
    if (age>=18)
    {
        printf("you have vote \n");

    }
    else if (age>=10)
    {
        printf("you have vote for child\n");
    }
    else if (age>=4)
    {
        printf("you have vote for babes \n");
    }
    
    else{
        printf("you have can note vote\n");
    }
    
    return 0;
    
}