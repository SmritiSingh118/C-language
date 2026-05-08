#include <stdio.h>
#include<string.h>

int main()
{
    FILE *lower;
    FILE *upper;
    int d;
    int n,i;
    
    printf("enter no of numvbers:");
    scanf("%d",&n);
    lower=fopen("lower.txt","w");
    for(i=0;i<n;i++){
        scanf(" %d",&d);
        fprintf(lower,"%d ",d);
        
    }
    fclose(lower);
    lower=fopen("lower.txt","r");
    upper=fopen("upper.txt","w");
    while(fscanf(lower,"%d",&d)!=EOF){
       if(d%5==0)
       
        fprintf(upper,"%d",d);
        
        
    }fclose(lower);
    fclose(upper);
    upper=fopen("upper.txt","r");
    while(fscanf(upper,"%d",&d)!=EOF){
        printf("%d",d);
        
    }fclose(upper);return 0;
}
