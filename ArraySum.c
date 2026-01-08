// program to find the sum of one dimensional array
#include<stdio.h>
#include<conio.h>
int main(){
    int a[]= {1,2,3,4,5};
    int b[] = {5,4,3,2,1};

    // without using loop
    int sum[5];  // declaring sum array , of size 5
                 //because both a and b arrays are of size 5
    sum[0]= a[0]+b[0];
    sum[1]= a[1]+b[1];
    sum[2]= a[2]+b[2];
    sum[3]= a[3]+b[3];
    sum[4]= a[4]+b[4];
    printf("Without using loop:\n");
    printf(" %d",sum[0]);
    printf(" %d",sum[1]);
    printf(" %d",sum[2]);
    printf(" %d",sum[3]);
    printf(" %d\n",sum[4]);

    // with using loop
    printf("Using loop:\n");
    int add[5]; 
    for(int i =0; i<5; i++){
        add[i] = a[i] + b[i];
        printf("%d ",add[i]);
    }

return 0;
}
