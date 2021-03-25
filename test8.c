#include <stdio.h>
int main()
{
    int math, sceince,english;/* condition */
    printf("enter the mask math \n");
   scanf("%d",&math);
    printf("enter the math %d marks\n",math);
    printf("enter the mask sceince\n");
    scanf("%d", &sceince);
    printf("enter the sceince %d  marks \n ",sceince);
    scanf("%d", &english);
    printf("enter the marks %d english\n", english);
    if (math>=20,sceince>=20,english>=20)
    {
        printf("you won first price\n");
    }
    else if (math>=15,sceince>=15,english>=15)
    {1
        printf("you won second price\n");
    }/* condition */
    else if (math>20,sceince>20,english>15)
    {/* condition */
        printf("you won first price for math and sceince and second price for english");
    }
    
    

    return 0;
}