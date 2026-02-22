int arm(int);
#include <stdio.h>
#include<math.h>
int main(){
    int n,t;
    printf("enter the number");
    scanf("%d",&n);
    t=arm(n);
    if(t==n)
    printf("armstrong");
    else
    printf("not an armstrong");
    return 0;
    
}
int arm(int n){
    int c=0,s=0,e,p,d,m;
    m=n;
    while(m>0){
        m=m/10;
        c=c+1;
    }
    while(n>0){
        d=n%10;
        p=pow(d,c);
        s=s+p;
        n=n/10;
    }
    return s;
}
