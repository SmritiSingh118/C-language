#include<stdio.h>
struct Book{
    int b_id;
    char title[20];
    char author[20];
    int price;
};
int main(){
    struct Book b[20];
    int n,c=0,i;
    printf("enter the num of records=");
    scanf("%d",&n);
  
    for(i=0;i<n;i++){
        printf("\nEnter details for book %d:\n", i+1);
        scanf("%d %s %s %d",&b[i].b_id,&b[i].title,&b[i].author,&b[i].price);
    }
    for(i=0;i<n;i++){
        printf("%d %s %s %d",b[i].b_id,b[i].title,b[i].author,b[i].price);
    }
    return 0;
}
