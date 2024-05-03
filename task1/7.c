// C program to check two matrices are identical or not
#include<stdio.h>

int identical(int a[10][10], int b[10][10], int r, int c)
{
    int i, j;

    for(i = 0; i < r; i ++)
    {
        for(j = 0; j < c; j ++)
        {
            if(a[i][j] != b[i][j])
            {
                return 0;
            }
        }
    }
    return 1;
}

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

        if(identical(a, b, r1, c1))
        {
            printf("\nMatrices are identical");
        }
        else
        {
            printf("\nMatrices aren't identical");
        }

    }
    else
    {
        printf("Aren't identical as rows and columns aren't equal");
    }
    return 0;
}