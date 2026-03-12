#include <stdio.h>

int factorial(int x){
   if(x==1||x==0){
       return 1;
   }
   return x*factorial(x-1);
}

int main(){
    int n,i,sum=0;

    printf("Enter N: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        sum = sum + factorial(i);
    }

    printf("Sum = %d",sum);
}
