#include<stdio.h>
#include<math.h>
int main(){
    int n,i,a[40],b;
    printf("enter n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter numbers");
        scanf("%d",&a[i]);}
        printf("the array is\n");
         for(i=0;i<n;i++){
             printf("%d ",a[i]);
         }
         for(i=0;i<n;i++){
        if(i%2==0){
            b=pow(a[i],a[i+1]);}
            printf("a= %d\n ",b);}
            return 0;
}
