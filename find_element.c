#include <stdio.h>
int find_element(int a[],int n)
{
    int e,i;
    printf("enter the element u want to find:");
    scanf("%d",&e);
    for (i=0;i<n;i++)
    {
        if(a[i]==e)
        printf("the element found at %d\n",i);
      
    }  return 0;
}
int main(){
    int i,n;
    printf("enter th enumber of elements in the array");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }printf("\n"); printf("original array");
    for(i=0;i<n;i++){
       
        printf("%d",a[i]);
    }printf("\n");
    find_element(a,n);
    return 0;
}
