#include<stdio.h>
int main(){
    int n,i,a=2;
    printf("enter number=");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d",a);
        if(i!=n)
           printf(",");
        a=a*2;
    }
    
    return 0;
}
