#include <stdio.h>
#include <math.h>
int main(){
    int n,i;
    int sum=0;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d^3",i);
        sum=sum+pow(i,3);
        if(i!=n){
            printf(" + ");
        }
    }printf("\nsum is:%d",sum);
}
