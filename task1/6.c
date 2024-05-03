// C program to find sum and subtraction of two matrices
#include<stdio.h>

int main()
{
    int r1, r2, c1, c2, i , j, a[10][10], b[10][10];

    printf("Enter the number of rows for 1st matrix: ");
    scanf("%d", &r1);

    printf("\nEnter the number of columns for 1st matrix: ");
    scanf("%d", &c1);

    printf("Enter the number of rows for 2nd matrix: ");
    scanf("%d", &r2);

    printf("\nEnter the number of columns for 2nd matrix: ");
    scanf("%d", &c2);

    

    if(r1 == r2 && c1==c2)
    {
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

        printf("Matrix after addition...\n");

        int sum[10][10];

        for(i = 0; i < r2; i++)
        {
            for(j = 0; j < c2; j ++)
            {
                sum[i][j] = a[i][j] + b [i][j];
                printf("%d",sum[i][j]);
                printf("\t");
            }
            
            printf("\n");
        }

        printf("Matrix after subtraction(a[i][j]-b[i][j])...\n");

        int sub[10][10];

        for(i = 0; i < r2; i++)
        {
            for(j = 0; j < c2; j ++)
            {
                sub[i][j] = a[i][j] - b [i][j];
                printf("%d",sub[i][j]);
                printf("\t");
            }
            
            printf("\n");
        }

    }
    else
    {
        printf("Addition/Subtraction not possible as the rows and columns of both matrices aren't equal");
    }
    return 0;
}