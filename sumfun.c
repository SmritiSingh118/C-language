int sum();
#include<stdio.h>
int main(){
    int n ,t;
    printf("enter the number");
    scanf("%d",&n);
    t=sum(n);
    printf("sum of digits: %d",t);
    return 0;
}
int sum(int n){
    int s=0,d;
    while(n>0){
        d=n%10;
        s=s+d;
        n=n/10;
        
    } return s;
}
