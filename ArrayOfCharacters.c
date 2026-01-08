/*
	Author : Umair 
	Program : Array Of characters
*/
#include <stdio.h>

int main() {

    // String defined using double quotes
    // Compiler automatically adds '\0' (null character) at the end
    char name[] = "cprogramming";

    printf("Elements in the array are:\n");

    // Loop runs until null character '\0' is encountered
    for (int i = 0; name[i] != '\0'; i++) {
        // (i + 1) is used to display position starting from 1
        printf("Element %d : %c\n", (i + 1), name[i]);
    }

    return 0;
}
