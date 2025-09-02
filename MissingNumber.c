#include <stdio.h>

int main() {
    int arr[] = {1, 3, 4, 2, 6}; 
    int n = 6; 
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    long long expected_sum = (long long)n * (n + 1) / 2;

    long long actual_sum = 0;
    int i;
    for (i = 0; i < arr_size; i++) {
        actual_sum += arr[i];
    }

    
    int missing_number = expected_sum - actual_sum;

    printf("The given array is: ");
    for (i = 0; i < arr_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("The missing number is: %d\n", missing_number);

    return 0;
}