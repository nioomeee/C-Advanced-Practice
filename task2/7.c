// Write a program in C to count total number of vowel or consonant in a string.
#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    char str[20];
    int vow = 0, cons = 0;

    printf("Enter the string: ");
    gets(str);

    for(int i = 0; str[i]!='\0'; i++)
    {
        str[i] = tolower(str[i]);   
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vow++;
        }
        else
        {
            cons++;
        }                  
    } 

    printf("\nThe total number of vowels: %d", vow);  
    printf("\nThe total number of consonants: %d", cons);  
    return 0;
}