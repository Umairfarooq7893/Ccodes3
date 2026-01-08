/*
    Author  : Umair
    Program : Array of Characters (Multiple Strings)
*/
#include <stdio.h>

int main() {

    char names[3][20];   // 3 strings, each of max length 19 + '\0'

    printf("Enter 3 names:\n");

    printf("Size of one string = %d bytes\n", sizeof(names[0]));
    printf("Total size of array = %d bytes\n\n", sizeof(names));

    // Taking input
    for (int i = 0; i < 3; i++) {
        scanf("%s", names[i]);   // names[i] is already an address
    }

    // Displaying output
    printf("\nEntered names:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
