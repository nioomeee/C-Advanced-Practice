// Write a C program to Create a file and write data in it using fputs() function.
#include<stdio.h>
#include<string.h>

int main()
{
    FILE *fp;
    char str[20];

    fp = fopen("new.txt", "w");

    printf("Enter the string you want to copy inside the new file: ");
    gets(str);

    fputs(str, fp);

    return 0;
}