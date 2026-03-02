#include <stdio.h>
int reverse( int a[],int n){
    int i,t;
    for (i=0;i<n/2;i++){
        t=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=t;
    }
    printf("reversed array :");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
        
    }return 0;
}
int main(){
    int i,n;
    printf("enter no of elemnets in the array");
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++){
        printf("enter th elements");
        scanf("%d",&a[i]);
        
    }
    printf("original array");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
        
    }printf("\n");
    reverse(a,n);
    return 0;
}
