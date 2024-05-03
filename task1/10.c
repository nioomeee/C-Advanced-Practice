// C program to find multiplication of two matrices
#include<stdio.h>

int main()
{
    int r1, r2, c1, c2, i , j,k, a[10][10], b[10][10], res[10][10];

    printf("Enter the number of rows for 1st matrix: ");
    scanf("%d", &r1);

    printf("\nEnter the number of columns for 1st matrix: ");
    scanf("%d", &c1);

    printf("\nEnter the number of rows for 2nd matrix: ");
    scanf("%d", &r2);

    printf("\nEnter the number of columns for 2nd matrix: ");
    scanf("%d", &c2);

    printf("\nTaking the input values from the user for 1st matrix...");

    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c1; j ++)
        {
            printf("\na[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nTaking the input values from the user for 2nd matrix...");

    for(i = 0; i < r2; i++)
    {
        for(j = 0; j < c2; j ++)
        {
            printf("\nb[%d][%d] : ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("\nPrinting the values for 1st matrix... \n");

    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c1; j ++)
    {
            printf("a[%d][%d] : %d", i, j, a[i][j]);
            printf("\t");
        }
    printf("\n");
    }

    printf("\nPrinting the values for 2nd matrix... \n");

    for(i = 0; i < r2; i++)
    {
        for(j = 0; j < c2; j ++)
    {
            printf("b[%d][%d] : %d", i, j, b[i][j]);
            printf("\t");
        }
    printf("\n");
    }

    if(c1 == r2)
    {
        // Multiplying the elements
        for(i = 0; i < c1; i ++)
        {
            for(j = 0; j < r2; j++)
            {
                res[i][j] = 0;
                for(k = 0; k < r1; k++)
                {
                    res[i][j] += (a[i][k] * b[k][j]); 
                }
            }
        }

        //  Printing the resultant matrix
        for(i = 0; i < r1; i++)
        {
            for(j = 0; j < c1; j ++)
        {
                printf("Resultant[%d][%d] : %d", i, j, res[i][j]);
                printf("\t");
            }
        printf("\n");
        }


        return 0;
    }
    else
    {
        printf("Multiplication not possible as the columns of the 1st matrix don't match the rows of the 2nd matrix");
        return 0;
    }

        
    
}