// C program to find the frequency of even numbers in matrix
#include<stdio.h>

int main()
{
    int r , c, i , j, a[10][10];

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

    // Calculating the frequency even numbers

    int freq = 0;

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j ++)
        {
            if(a[i][j]%2 == 0)
            {
                freq ++;
            }
        }
    }

    printf("\nnThe frequency of the even numbers u=in the matrix is: %d", freq);

    return 0;
}