#include <stdio.h>
#include<stdlib.h>
int main()
{
   int *p;
   int n,i,count=0;
   printf("enter no of numbers");
   scanf("%d",&n);
   p=(int*)malloc(n*sizeof(int));
   printf("enter numbers of array");
   for(i=0;i<n;i++){
       scanf("%d",(p+i));
       
   }
   for (i=0;i<n;i++){
       if(*(p+i)>=10||*(p+i)<=-10)
       count++;
   } printf("%d",count);
   free(p);return 0;
}
