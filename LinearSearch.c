 // Author  :  Umair
// Program :  Linear Search

#include <stdio.h>
int main() {
//lets define some array
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    int n = 10;   // total number of elements
    int x = 6;   // element to search

//Linear Search algorithm
    for(int i = 0; i < n; i++) {
        if(arr[i] == x) {
            printf(" Match found at index = %d",i);
            return 0; // means then end programme here
        }
    }
        printf(" Match not found");

    return 0;
}

// int n = sizeof(arr) / sizeof(arr[0]);
// total size divided by size of one element
