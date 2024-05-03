// C program to transpose a matrix
#include<stdio.h>

int main()
{
    int i, j, r, c, matrix[10][10];
    
    printf("Enter the number of rows: ");
    scanf("%d", &r);

    printf("Enter the number of columns: ");
    scanf("%d", &c);

    printf("Taking input values ddfrom the user...\n");
    
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

    

    printf("Transpose of matrix...\n");

    for(i = 0; i < r; i ++)
    {
        for(j = 0; j < c ; j ++)
        {
            printf("a[%d][%d]: %d", i, j, matrix[j][i]);
            printf("\t");
        }
        printf("\n");
    }

    return 0;
}