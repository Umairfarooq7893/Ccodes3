#include <stdio.h>
int main(){
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Getting target from tye user
    int target;
    printf("Enter the target: ");
    scanf("%d", &target);

    int low = 0;
    int high = n - 1;
    int mid;
    int found_index = -1;

    while (low <= high) {               // low index <= high index
        mid = (low + high) / 2;         // mid , means mid index

        if (arr[mid] == target) {
            found_index = mid;
            break;
        
        } else if (target > arr[mid]) {
                         /* then update the low with mid + 1
                            because            */
            low = mid + 1;
        } else {         /* If target is in left part ,ie less than mid value
                             update the high value with high = mid - 1*/
            high = mid - 1;
        }
    }

    if (found_index!= -1) {
        printf("Element %d found at index %d.\n", target, found_index);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
 