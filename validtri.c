#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter the angles");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b+c==180)
    {
        printf("valid triangle");
    
    }
    else
    {
       printf("not a triangle");
    }
    return 0;
}
