#include <stdio.h>
#include<string.h>

int main()
{
    FILE *lower;
    FILE *upper;
    char ch;
    int n,i;
    
    printf("enter no of chrs:");
    scanf("%d",&n);
    lower=fopen("lower.txt","w");
    for(i=0;i<n;i++){
        scanf(" %c",&ch);
        fprintf(lower,"%c",ch);
        
    }
    fclose(lower);
    lower=fopen("lower.txt","r");
    upper=fopen("upper.txt","w");
    while(fscanf(lower,"%c",&ch)!=EOF){
       if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
       ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
       
        fprintf(upper,"%c",ch);
        
        
    }fclose(lower);
    fclose(upper);
    upper=fopen("upper.txt","r");
    while(fscanf(upper,"%c",&ch)!=EOF){
        printf("%c",ch);
        
    }fclose(upper);return 0;
}
