/*
You are given a matrix of size NxM where N is the row number and M is the column number. Now first line of the
input will contain the value of N and M , and the next line will contain the matrix, Now print the transpose version of
this matrix.
*/

#include<stdio.h>

int main()
{
    int row, col, i, j;
    scanf("%d%d", &row, &col);
    int a[row][col];
    int trans[row][col];

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            trans[j][i]=a[i][j];
        }
    }

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }


    return 0;
}