#include <stdio.h>
void main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if(n%2==0)
    {
        if(n%4==0)
        {
            printf("divisible by 4 and even");
        }
        else
        {
            printf("not divisible by 4 but even");
        }
    }
    else
    {
        if(n%3==0)
        {
            printf("divisible by 3 and odd");
            
        }
        else
        {
            printf("not divisible by 3 but odd");
        }
    }
}
