//You are given two matrix of size NxM where N is the row number and M is the column number. Now first line of
//the input will contain the value of N and M , and the next two line will contain the two matrix, Now perform
//matrix addition operation.


//note work done by a and b insted of the M and N.
#include<stdio.h>

int main()
{
    int row, col, ans;
    scanf("%d %d", &row, &col);

    //input for the a matrix and b matrix
    int a[row][col];
    int b[row][col];
    int c[row][col];

    //input for the matrix element a
    for(int i =0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
  //input for the matrix element b
    for(int i =0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    //Matrix addition and put in a in matrix.
    for(int i =0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }

    //print the result of the addition matrix.
    
    for(int i =0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}