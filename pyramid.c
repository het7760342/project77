#include<stdio.h>
void pyramid(int a)
{
    int i,j;
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
int main()
{
    int rows;
    printf("enter no of rows:");
    scanf("%d",&rows);
    pyramid(rows);
    return 0;
}