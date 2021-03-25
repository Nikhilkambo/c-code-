#include <stdio.h>
int main()
{
    int a;

    printf("enter your number\n");
    scanf("%d",& a);
    printf("you have entered the %d\n", a);
    while (a<30)
    {
        printf("%d\n", a);
        a = a+1;

    }
    int b ,index =0;
    printf("enter the b number ");
    scanf("%d",&b);
    printf("you have entered the b is %d\n",b);
    do
    {
        printf("%d\n",index + 1);
        index = index + 1;
    } while (index <b );
    

    
    return 0;

}