/*
 * This program can help the user add the values stored within two matrices.
 *
 * Author: Soraya Maqueda
 * Date: 15.10.2018
 * Contact: soraya_maqueda@hotmail.com
 */
#include <stdio.h>

int main() {
    int rows;
    int columns;
    int firstMatrix[100][100];
    int secondMatrix[100][100];
    int sum[100][100];
    int i;
    int j;

    //Here I get the number of rows of the matrix.
    printf("Number of rows: \n");
    scanf("%i", &rows);

    //Here I get the number of column of the matrix.
    printf("Number of columns: \n");
    scanf("%i", &columns);

    //Here I start to get the numbers of the first matrix.
    printf("\nFirst Matrix\n");

    for(i=0; i<rows; ++i)
        for(j=0; j<columns; ++j){
            printf("Give me a number: \n");
            scanf("%i",&firstMatrix[i][j]);
        }

    printf("\nSecond Matrix\n");
    for(i=0; i<rows; ++i)
        for(j=0; j<columns; ++j)
        {
            printf("Give me a number: \n");
            scanf("%d", &secondMatrix[i][j]);
        }

    // Adding Two matrices
    for(i=0;i<rows;++i)
        for(j=0;j<columns;++j)
        {
            sum[i][j]=firstMatrix[i][j]+secondMatrix[i][j];
        }

    // Displaying the result
    printf("\nSum of two matrix is: \n\n");

    for(i=0;i<rows;++i)
        for(j=0;j<columns;++j)
        {

            printf("%i   ",sum[i][j]);

            if(j==columns-1)
            {
                printf("\n\n");
            }
        }

    return 0;
}