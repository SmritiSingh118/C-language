#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    float sum = 0;

    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("Series: ");

    for(i = 1; i <= n; i++) {
        printf("1/%d", i);

        
sum=sum+(1.0/i);
        if(i != n)
            printf(" + ");
    }

    printf("\nSum = %f", sum);

    return 0;
}
