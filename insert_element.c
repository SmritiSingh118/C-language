#include<stdio.h>
int insert(int a[], int n) {
        int pos, num,i;
        printf("Enter the position (0-based) and element: ");
        scanf("%d %d", &pos, &num);

    if (pos < 0 || pos > n) {
        printf("Invalid position!\n");
        return n; 
    }
    for (i = n; i > pos; i--) {
        a[i] = a[i - 1];
    }
    a[pos] = num;
    return n + 1;
}
int main() {
    int n, i, choice;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n+1]; 
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &a[i]);
    }
    printf("Original array: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    printf("Do you want to insert an element (1 for yes, 0 for no): ");
    scanf("%d", &choice);
    if (choice == 1) 
      {n=insert(a, n);
    printf("Updated array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    }
    return 0;
}
