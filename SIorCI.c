#include <stdio.h>
#include <math.h>
void main ()
{
    float p,r,t,a,b,SI,CI;
    printf("enter p,r and t");
    scanf("%f%f%f",&p,&r,&t);
    SI=(p*r*t/100);
    a=(1+r/100);
    b=pow(a,t);
    CI=p(b)-p;
    if(p>10000)
    {
        printf("we get SI as:%f",SI);
    }
    else
    {
        printf("we get CI as %f",CI);
    }
