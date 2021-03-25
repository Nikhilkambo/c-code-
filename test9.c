#include <stdio.h>
int main(){
    int age;
    printf("enter your age\n");
    scanf("%d",&age);
    printf("you have enter the %d\n",age);
    switch (age)
    {
    case 3:
         printf("the age is three\n");
        break;
    case 13:
    printf("the age is thirteen\n");
    break;
    case 23:
    printf("the age is twentythree\n");
    break;

    default:
    printf("the age is donot match\n");
        break;
    }
    return 0;
}