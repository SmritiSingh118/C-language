int fact();
#include <stdio.h>
int main(){
    int n,t;
    printf("enter th number");
    scanf("%d",&n);
    t=fact(n);
    printf("fact is %d",t);
    return 0;
}
int fact(int n){
    int f=1,i;
    if(n==0||n==1){
        printf("fact is %d",n);
        
    }
    else{
        for(i=1;i<=n;i++){
            f=f*i;
           
        } 
         
        return f;
    }
}
