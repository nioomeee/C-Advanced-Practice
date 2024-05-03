// C Program to find sum of all elements of each row of a matrix
#include<stdio.h>

int main()
{
    int r, c, i, j, a[10][10];
    printf("Enter the number of rows: ");
    scanf("%d", &r);

    printf("Enter the number of columns: ");
    scanf("%d", &c);

    printf("\nTaking input from the user...\n");

    for(i = 0; i < r; i ++)
    {
        for(j = 0; j < c ; j ++)
        {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nPrinting the array back...\n");

    for(i = 0; i < r; i ++)
    {
        for(j = 0; j < c ; j ++)
        {
            printf("a[%d][%d]: %d", i, j, a[i][j]);
            printf("\t");
        }
        printf("\n");
    }

    int sum = 0;

    for(i = 0; i < r; i ++)
    {
        for(j = 0; j < c; j ++)
        {
            sum+=a[i][j];
        }
        printf("\nThe sum of %d row: %d", i, sum);
        sum = 0;
    }
    return 0;
}