#include <stdio.h>

int reverse(int n,int r){
    if(n==0){
        return r;
    }
    return reverse(n/10,r*10+n%10);
}

int main(){
    int num,y;

    printf("Enter number: ");
    scanf("%d",&num);
y=reverse(num,0);
    printf("Reversed number = %d", y);
}
