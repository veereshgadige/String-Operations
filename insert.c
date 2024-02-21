#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of inputs: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the inputs from the user:\n");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    // Remove duplicate elements
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size;) {
            if (arr[i] == arr[j]) {
                // Shift elements to overwrite the duplicate
                for (int k = j; k < size - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                size--; // Reduce the size of the array
            } else {
                j++; // Move to the next element
            }
        }
    }

    // Print the array after removing duplicates
    printf("Array after removing duplicates:\n");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

