/*
Q.3 Write a Program to find the transpose matrix of a given 2D array.
For example,
Input:
Enter the array's row & column size: 3

Enter array's elements:
a[0][0] = 2
a[0][1] = 4
a[0][2] = 1
a[1][0] = 3
a[1][1] = 5
a[1][2] = 4
a[2][0] = 8
a[2][1] = 2
a[2][2] = 6

Output:
The transpose matrix of an array:
2 3 8
4 5 2
1 4 6
*/

#include <stdio.h>

int main() {
    int r,c,i,j;
    int a[100][100];
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
   
    for (i = 0; i<r; i++) {
        for (j = 0; j<c; j++) {
        printf("Enter the elements of the array:");
            scanf("%d",&a[i][j]);
        }
    }
    int trans[c][r];
   
    for (i=0; i<c; i++) {
        for (j=0; j<r; j++) {
            trans[i][j] = a[j][i];
        }
    }

   printf("The transpose matrix is:\n");
    for (i=0; i<c; i++) {
        for (j=0; j<r; j++) {
       
            printf("%d ",trans[i][j]);
        }
        printf("\n");
    }

}

