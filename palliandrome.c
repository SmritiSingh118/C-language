#include <stdio.h>

int main()
{int n,m,d,rev=0;
printf("enter th number");
scanf("%d",&n);
m=n;
while(n>0){
    d=n%10;
    rev=(rev*10)+d;
    n=n/10;
}
if (m==rev){
    printf("palliandrome");
    
}
else{
    printf("not");
}
return 0;

}
