#include<stdio.h>
int main(){
// declaring two 2D arrays
    int a[2][3], b[3][2];
// taking input for first matrix
    printf("Enter elements of first matrix (2x3):\n");
    for(int i =0 ; i<2 ;i++){
        for(int j=0; j<3 ; j++){
            scanf("%d",&a[i][j]);
        }
    }
// taking input for second matrix
    printf("Enter elements of second matrix (3x2):\n");
    for(int i =0 ; i<3 ;i++){
        for(int j=0; j<2 ; j++){
            scanf("%d",&b[i][j]);
        }
    }
// declaring a 2D array to store multiplication result
    int mul[2][2];

// performing matrix multiplication

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            mul[i][j]=0; // initializing all elements to 0
            for(int k=0; k<3; k++){
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
// DISPLAYING THE RESULTANT MATRIX
    printf("Resultant Matrix after Multiplication (2x2):\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d\t", mul[i][j]);
        }
        printf("\n");

    }
     return 0 ;
}