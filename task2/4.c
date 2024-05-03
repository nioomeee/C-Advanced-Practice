// Write a program in C to Find the Frequency of Character in a string.. 
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char str[20], frequency[256]={0}, count = 0;

    printf("Enter the string: ");
    gets(str);

    for(int i = 0; str[i]!='\0'; i++)
    {
        str[i] = tolower(str[i]);
        frequency[(int)str[i]]++;
    }        

    for(int i = 0; i < 256; i ++)
    {
        if(frequency[i] != 0)
        {
            printf("\nThe frequency of %c: %d", i, frequency[i]);
        }
    }         
    return 0;
}