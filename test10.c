#include <stdio.h>
int main()
{
    int age;

    printf("enter your age ");
    scanf("%d",&age );
    printf("the age is %d\n",age);
    if (age<34) 
    {
        printf("you have the marriage\n");
    }
    else if (age<=20)
    {
        printf("you are dont marriage\n");

    }
    else
    {
        printf("you have dont marriage you have high age");
    }
    

    
    return 0;
}