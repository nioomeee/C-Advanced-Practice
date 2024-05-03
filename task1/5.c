// C program to read a matrix and print it's diagonals
#include<stdio.h>

int main()
{
    int i, j, r, c, matrix[10][10];
    
    printf("Enter the number of rows: ");
    scanf("%d", &r);

    printf("Enter the number of columns: ");
    scanf("%d", &c);

    // Checking whether matrix is square matrix or not
    if(r == c)
    {
        printf("Taking input values from the user...\n");
    
        for(i = 0; i < r; i ++)
        {
            for(j = 0; j < c ; j ++)
            {
                printf("a[%d][%d]: ", i, j);
                scanf("%d", &matrix[i][j]);
            }
        }

    

        printf("\nPrinting the array back...\n");

        for(i = 0; i < r; i ++)
        {
            for(j = 0; j < c ; j ++)
            {
                printf("a[%d][%d]: %d", i, j, matrix[i][j]);
                printf("\t");
            }
            printf("\n");
        }

        printf("\nPrinting the diagonal of the matrix...\n");
        
        for(i = 0; i < r; i ++)
        {
            for(j = 0; j < c ; j ++)
            {
                if(i == j)
                {
                    printf("matrix[%d][%d]: %d\t", i, j, matrix[i][j]);
                }
                
                else
                {
                    printf("matrix[%d][%d]:  \t", i, j);                
                }
                
            }
            printf("\n");
        }
    }

    else
    {
        printf("The values of rows and columns don't match the criteria of a square matrix");
    }


    return 0;
}