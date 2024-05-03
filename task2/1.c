// Write a program in C which will take a letter from the user and find whether it is an -
// ◦ Alphabetic chracter
// ◦ AlphaNumeric Chracter
// ◦ Digit
// ◦ Space
// ◦ Lowercase
// ◦ Uppercase
#include<stdio.h>
#include<ctype.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if(isalpha(ch))
    {
        printf("\nThe character is an alphabet.");

        if(islower(ch))
        {
            printf("\nThe character is a lowercase alphabet");
        }
        else if(isupper(ch))
        {
            printf("\nThe character is an uppercase alphabet");
        }
    }
    else if(isdigit(ch))
    {
        printf("\nThe given character is a digit");
    }
    else if(isspace(ch))
    {
        printf("\nThe given character is a white space character");
    }
    else if(iscntrl(ch))
    {
        printf("\nThe given character is a control character");
    }
    else
    {
        printf("\nThe entered character is a special character");
    }
    return 0;
}