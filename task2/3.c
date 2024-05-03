// Write a program in C to input a string and print its length without library function.
#include<stdio.h>
#include<ctype.h>

int main()
{
    char str[20];
    int i;
    int length;

    printf("Enter the string: ");
    gets(str);

    for(i = 0; str[i]!= '\0'; i++)
    {
        length++;         
    }

    printf("The length of the given string is: %d", length);
    return 0;
}