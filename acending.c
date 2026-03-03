#include <stdio.h>
int acending(int a[],int n){
    int i,j,t;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if (a[i]>a[j]){
            t=a[i];
            a[i]=a[j];
            a[j]=t;}
        }
    }printf("sorted array:");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }printf("\n");
    return 0;
}
int main() 
{int i, n;
printf("Enter the number of elements: ");
scanf("%d", &n);
int a[n]; 
for (i = 0; i < n; i++)
{printf("Enter element %d: ", i + 1);
scanf("%d", &a[i]);}
printf("Original array: ");
for (i = 0; i < n; i++)
{printf("%d ", a[i]);}
printf("\n");
acending(a, n);
return 0;
}
