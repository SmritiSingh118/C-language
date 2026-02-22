#include<stdio.h>
int main(){
    int i,j,n;char num='A';
    printf("enter no of rows");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%c",num);
            num++;
        }printf("\n");
    }
}
