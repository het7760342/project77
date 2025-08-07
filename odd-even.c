#include<stdio.h>

void xyz()
{
    int a,b=1,i;
    printf("enter a number:");
    scanf("%d",&a);
    printf("ODD-EVEN\n");
    if(a%2==0)
    {
        printf("number is even\n");
    }
    else
    {
        printf("number is odd\n");
    }
    printf("FACTORIAL");
    for(i=1;i<=a;i++)
    {
        b=i*b;
    }
    printf("\nfactorial of %d is %d",a,b);
}
int main()
{
    xyz();
    return 0;
}