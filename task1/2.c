// C Program to read a matrix and find sum, product of all elements of two dimensional (matrix) array
#include<stdio.h>

int main()
{
    int r, c, i, j, a[10][10];

    printf("Enter the number of rows: ");
    scanf("%d", &r);

    printf("\nEnter the number of columns: ");
    scanf("%d", &c);

    printf("\nTaking the input values from the user...");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j ++)
        {
            printf("\na[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nPrinting the values... \n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j ++)
        {
            printf("a[%d][%d] : %d", i, j, a[i][j]);
            printf("\t");
        }
        printf("\n");
    }

    int sum = 0;
    int prod = 1;

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j ++)
        {
            sum+=a[i][j];
            prod*=a[i][j];
        }
    }

    printf("\nThe sum of all elements is: %d", sum);
    printf("\nThe product of all elements is: %d", prod);
    
    return 0;
}
