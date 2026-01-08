// Author  :  Umair Farooq 
// Program :  Binary Search

#include <stdio.h>
int main() {
    // let's define some sorted array
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = 10;    // total number of elements
    int x = 6;     // element to search

    int low = 0;
    int high = n - 1;
    int foundIndex = -1;

    // Binary Search algorithm
    while (low <= high) {
        int mid = (high + low) / 2;
 
        if (arr[mid] == x) {
            foundIndex = mid;
            break;
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (foundIndex != -1) {
        printf("Match found at index = %d", foundIndex);
    } else {
        printf("Element not found");
    }

    return 0;
}
/*How Binary Search Works
The algorithm begins by comparing the target value to the middle element of the array.​

If the target matches the middle element, its index is returned.

If the target is less than the middle element, binary search continues on the left (lower) half of the array.

If the target is greater than the middle element, the search continues on the right (upper) half.​

This process repeats, halving the search range each time, until the target is found or the range is empty.*/


/*Steps of the Binary Search Algorithm
Set the low and high pointers at the first and last elements of the sorted array.

Check if the array segment is valid (low ≤ high).

Find the middle position: 
mid
=
low
+
high
2
mid= 
2
low+high
 .

Compare the value at mid with the target:

If equal, return mid (target found).

If target < array[mid], set high = mid - 1 (search left).

If target > array[mid], set low = mid + 1 (search right).

Repeat steps 2–4 until the segment is invalid. If not found, return -1.*/