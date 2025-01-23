#include <stdio.h>

int main() {
    int n, i, largest;

    // Prompt the user to enter the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize the largest variable with the first element
    largest = arr[0];

    // Traverse the array to find the largest element
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Output the largest element
    printf("The largest element in the array is: %d\n", largest);

    return 0;
}