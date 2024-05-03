// Write a program in C to input a string and print it
#include<stdio.h>
#include<string.h>

int main()
{
    char str[20];
    printf("Enter a string: ");
    gets(str);

    printf("\nThe string is: %s", str);
    return 0;
}