/*
Q.2 Write a Program to find the largest element from a given 2D array.
For example,
Input:
Enter the array's row size: 3
Enter the array's column size: 3

Enter array's elements:
a[0][0] = 2
a[0][1] = 7
a[0][2] = 1
a[1][0] = 3
a[1][1] = 5
a[1][2] = 4
a[2][0] = 8
a[2][1] = 9
a[2][2] = 6

Output:
The largest element is: 9*/


#include <stdio.h>

int main() {

    int r,c,i,j,largest;
    int a[100][100];
   
   
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    printf("Enter the number of columns: ");
    scanf("%d",&c);

    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
        printf("Enter the elements of the array:");
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
            if (a[i][j]>largest) {
                largest = a[i][j];
            }
        }
    }
    printf("The largest element is :- %d\n", largest);

}

