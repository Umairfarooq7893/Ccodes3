// one dimensional array multiplication
#include<stdio.h>
#include<conio.h>
int main(){
    int a[5]= {1,2,3,4,5};
    int b[5] = {5,4,3,2,1};

    // without using loop
    int mul[5];  // declaring multiplication array , of size 5
                 //because both a and b arrays are of size 5
    mul[0]= a[0]*b[0];
    mul[1]= a[1]*b[1];
    mul[2]= a[2]*b[2];
    mul[3]= a[3]*b[3];
    mul[4]= a[4]*b[4];
    printf("Without using loop:\n");
    printf(" %d",mul[0]);
    printf(" %d",mul[1]);
    printf(" %d",mul[2]);
    printf(" %d",mul[3]);
    printf(" %d\n",mul[4]);

    // with using loop
    printf("Using loop:\n");
    int product[5]; 
    for(int i =0; i<5; i++){
        product[i] = a[i] * b[i];
        printf("%d ",product[i]);
    
        return 0;
    }
}
