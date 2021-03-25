#include <stdio.h>
int main()
{
    int a ,b;

    printf("enter the number\n");
    scanf("%d", &a);
    printf("you have enter the %d\n", a);
       printf("enter the number\n");
    scanf("%d", &b);
    printf("you have enter the %d\n", b);
 switch (a)
 {
 case 10:
     printf("you have enter the 10\n");
     
     switch (b)
     {
     case 12:
        printf("the number is b right");
    
     
     default:
     printf("the number is b worng");
         break;
     }
 
 default:
 printf("you have enter the worng\n ");
     break;
 }
    return 0;
}