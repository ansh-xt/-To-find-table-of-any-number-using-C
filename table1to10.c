#include<stdio.h>
#include<conio.h>

int main()
{
    int i,e,f,num1,num2,num3;
    printf("Enter first num \n");
    scanf("%d",&num1);
    int multi;
    for(i=1;i<=10;i++)

    {
        multi = num1 * i;
        printf("%d*%d=%d\n",num1,i,multi);
    }
    
    printf("Enter second num \n");
    scanf("%d",&num2);
    int multii;
    for(e=1;e<=10;e++)

    {
     multii = num2*e;
     printf("%d*%d=%d\n",num2,e,multii);
    }

    printf("enter third num\n");
    scanf("%d",&num3);
    int multiii;
    for(f=1;f<=10;f++)
    {
        multiii = num3*f;
        printf("%d*%d=%d\n",num3,f,multiii);
    }

    return 0;

}