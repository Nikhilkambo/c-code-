#include <stdio.h>
int main(){
    int age;
    printf("enter your age \n");
    scanf("%d" ,&age);
    printf("you have enter your %d as your age \n" ,age );
    if (age>18)
    {
        printf("you have vote\n");

    }
    
    return 0;
}