#include <stdio.h>
int main(){
int n,i,sum1=0,sum2=0;
printf("enter no of elements");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
    printf("enter elements");
    scanf("%d",&a[i]);
    if(a[i]%2==0){
        sum1+=a[i];
    }
    else{
        sum2+=a[i];
    }
}
printf("sum of even numbers %d\n",sum1);
printf("sum of odd numbers %d",sum2);
    return 0;
}
