/*
    Author  : Umair Farooq
    Program : Bubble sort
*/
#include <stdio.h>

int main() {
    // Declaring and initializing the array
    int arr[] = {64, 34, 25, 12, 22, 11, 90};

    // Calculating number of elements in the array
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n",n);

    int temp; // Temporary variable for swapping

    // Printing the original arrayh
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    /*   BUBBLE SORT   */

    // Outer loop for passes
    for (int i = 0; i < n - 1; i++) {

        /*  Inner loop for comparisons in each pass 
            After each pass, one element is placed
            at its correct position is at the end.
            So, the range of comparison reduces by i.
        */
        for (int j = 0; j < n - i - 1; j++) {

            /*
                Compare adjacent elements.
                If the left element is greater than the right element,
                swap them to move the larger element towards the end.
            */
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }

        /*
            End of one pass:
            The largest element among the unsorted part
            is now placed at its correct position.
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
 


/*How Bubble Sort Works:
Start at the beginning of the array.

Compare the current element with the next element.

If the current element is greater than the next element (for ascending order), swap them.

Move one position forward and repeat the comparison and swap for the entire array.

After one full pass, the largest element will have "bubbled" to the end of the array.

Repeat the process for the remaining elements (excluding the last sorted ones) until no swaps are needed, meaning the array is sorted.*/