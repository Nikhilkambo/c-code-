#include <stdio.h>
int main (){
    int age,marks;

    printf("enter your age\n");
    scanf("%d" ,&age);
    printf("you have enter age %d\n",age);
    printf("enter you marks\n");
    scanf("%d",&marks);
    printf("you have enter the %d marks\n",marks);
    switch (age)
    {
    case 22:
        printf("the age is valled\n");
    switch (marks)
        {
        case 45:
            printf("your marks is valled\n");

            break;
        
        default:
        printf("your marks not valled\n");
        }
        break;
    
        

    
    default:
    printf("your age is not valled\n");
        break;
    
    }
    return 0;
}