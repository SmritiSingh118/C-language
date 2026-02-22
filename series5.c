#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Series: ");

    for(i = 1; i <= n; i++) {

        if(i % 2 == 0)
            printf("-%d", i);
        else
            printf("%d", i);

        if(i != n)
            printf(" ");
    }

    return 0;
}
