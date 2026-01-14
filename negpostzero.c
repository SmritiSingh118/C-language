#include <stdio.h>
int main ()
{
    int n;
    printf("enter a no:");
    scanf("%d",&n);
    if(n>0)
    {
    printf("positive");
    }
    else if(n==0)
    {
        printf("zero");
    }
    else
    {
        printf("negative");
    }
return 0;
}
