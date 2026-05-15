#include<stdio.h>
int main()
{
    int cp,sp;
    printf("enter cp and sp");
    scanf("%d%d",&cp,&sp);
    if(sp>cp)
    {
        printf("profit");
    }
    else if(cp>sp)
    {
        printf("loss");
    }
    return 0;
}
