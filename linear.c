/*  Author  : Umair Farooq
    Program : Linear & Binary */
#include <stdio.h>
// Function Prototype
int linearSearch(int arr[], int size, int target);

int main() {
// declaring array
    int arr[100];   
// declaring size of array       
    int size;
// declaring the element, that is to be found
    int target;
// declaring the result (position where it is located)
    int result;

// Entering the size of array (mxn) from user
    printf("Enter the number of elements (Size) in the array: ");
    scanf("%d", &size);
// Entering the elements of array from user
    printf("Enter %d integer elements:\n", size);
    for (int i = 0; i < size; i++) { // i = 0 that is why i < size and  not equal to size
        scanf("%d", &arr[i]);  // at each value of i , it scans a value ,and stores at that index i
    }
// Entering the element to found
    printf("Enter the element to search for: ");
    scanf("%d", &target);
// using/calling function for searching
    result = linearSearch(arr, size, target);
// printing the result
    int i ;
    if (i >= size) {
        printf("Element %d found at index %d.\n", target, i);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
    // loops starts and runs one by one element
        if (arr[i] == target) { /* checks for the
            every element is equal to target or not */
            return i;
        }
    }
}
