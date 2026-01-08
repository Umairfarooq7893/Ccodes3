#include <stdio.h>

int main() {

    // Declaring and initializing the array
    int arr[] = {64, 25, 12, 22, 11};

    // Calculating number of elements in the array = total size / size of one entry
    int n = sizeof(arr) / sizeof(arr[0]);

    int min, temp;

    // Printing the original array
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    /*   SELECTION SORT   */

    for (int i = 0; i < n - 1; i++) {

        /*
            Step 1:
            Assume the first element of the unsorted part is minimum.
            Initially, the unsorted part starts from index i.
        */
        min = i;

        /*
            Step 2:
            Compare the assumed minimum element with the remaining
            elements in the unsorted part of the array.
        */
        for (int j = i + 1; j < n; j++) {

            /*
                If a smaller element is found,
                update the index of the minimum element.
            */
            if (arr[j] < arr[min]) {
                min = j;
            }
        }

        /*
            Step 3:
            Swap the smallest element with the first element
            of the unsorted part.
        */
        if (min != i) {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }

        /*
            Step 4:
            Now arr[i] is in its correct sorted position.
            Move to the next element.
        */
    }

    /*   SORTED ARRAY   */

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
