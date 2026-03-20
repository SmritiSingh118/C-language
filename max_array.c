
#include <stdio.h>

int main()
{

  
    int arr[] = { 23, 12, 45, 20, 90, 89, 95, 32, 65, 19 };

   
    int n = sizeof(arr) / sizeof(arr[0]);

   
    int res = arr[0];

   
    for (int i = 0; i < n; i++) {
        if (res < arr[i])
            res = arr[i];
    }
  
    printf("Array Elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
   
    printf("The maximum value of the array is: %d", res);

    return 0;
}
