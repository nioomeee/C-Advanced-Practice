// WAP to read integers into an array and reversing them using pointers 
#include<stdio.h>

void printrev(int *a,int *n)
{
    for(int i = *n-1; i >= 0; i-- )
    {
        printf("\n%d", a[i]);
    }
}

int main()
{
    int a[10], n;
    
    printf("Enter the number of elements you want: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i ++)
    {
        printf("\nA[%d]: ", i);
        scanf("%d", &a[i]);
    }
    
    printrev(a, &n);
    return 0;
}