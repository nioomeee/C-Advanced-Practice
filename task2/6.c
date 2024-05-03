// Write a program in C to separate the individual characters from a string.
#include<stdio.h>

int main()
{
    int i=0;
    char str[20];

    printf("Enter the string: ");
    gets(str);

    for(i = 0; str[i]!='\0'; i++)
    {
        printf("\n%c", str[i]);
    }
    return 0;
}