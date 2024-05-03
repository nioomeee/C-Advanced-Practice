// Write a program in C to find the length of a string without using library function.
#include<stdio.h>
#include<string.h>

int main()
{
    char str[20];
    int length;
    
    printf("Enter the string: ");
    gets(str);

    length = strlen(str);

    printf("The length of given string is: %d", length);
    return 0;
}