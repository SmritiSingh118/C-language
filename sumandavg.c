#include <stdio.h>
int sumandavg(int a[],int n){
    int sum=0,i;float avg;
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }avg=(float)sum/n;
    printf("\nsum is:%d",sum);
    printf("\n");
    printf("avg is:%f",avg);
    return 0;
}
int main(){
    int n,i;
    printf("enter the no of elements");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("enter the elements");
        scanf("%d",&a[i]);
   
    } printf("array is:");
    
    for(i=0;i<n;i++){
        printf("%d",a[i]);
        
    }
    sumandavg(a,n);
    return 0;
}
