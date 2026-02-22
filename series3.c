#include <stdio.h>
#include <math.h>
int fact(int n){
    if(n==0||n==1)
        return 1;
    else
        return n* fact(n-1);
    
}
int main() {
    int n, i,f;
    int sum = 0;

    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("Series: ");

    for(i = 1; i <= n; i++) {
        printf("%d!", i);

f=fact(i);
sum=sum+f;

        if(i != n)
            printf(" + ");
    }

    printf("\nSum = %d", sum);

    return 0;
}
