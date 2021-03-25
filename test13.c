#include <stdio.h>
int main()
{
    int abc;
    printf("enter your number\n");
    scanf("%d",&abc);
    printf("you have entered %d the number\n",abc);
    while (abc<30)
    {
        printf("%d\n",abc);
        abc = abc +1;
    }
    
    return 0;
}