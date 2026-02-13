#include <stdio.h>
int main(){
int n,i,m,sum1=0,sum2=0;
printf("enter the range");
scanf("%d",&n);
for(i=1;i<=n;i++){
    printf("enter number:");
    scanf("%d",&m);
if(m%2==0){sum1+=m;}
else{sum2+=m;}
}
printf("sum of even numbers %d\n",sum1);
printf("sum of odd numbers %d",sum2);
    return 0;
}
