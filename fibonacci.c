#include <stdio.h>

int main()
{int n,a,b,c=0,i;
 printf("enter the number");
scanf("%d",&n);
if(n==1||n==0){
    printf("%d",n);
}
else{
    a=0;
    b=1;
    printf("01");
    for(i=3;i<n;i++){
        c=a+b;
        a=b;
        b=c;
        printf("%d",c);
    }
}
return 0;

}
