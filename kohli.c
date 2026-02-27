#include <stdio.h>

int main() {
    int L, R, i;
    int count = 0;

    printf("Enter L and R: ");
    scanf("%d %d", &L, &R);

    for(i = L; i <= R; i++) {
        int last = i % 10;

        if(last == 2 || last == 3 || last == 9) {
            count++;
        }
    }

    printf("Number of lucky numbers: %d", count);

    return 0;
}
