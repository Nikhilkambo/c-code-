#include <stdio.h>
int main()
{int number;

    printf("enter the number \n ");
    scanf("%d",&number);
    printf("you have the entered %d the number\n",number);
    if (number>=12)  
    {
        printf("the number is write\n ");
    }
    else{
        printf("the number is wrong \n");
    }
    
    return 0;
}