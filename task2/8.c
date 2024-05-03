// Write a program in C to find maximum occurring character in a string
#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    char str[20], freq[256]= {0};

    printf("Enter the string: ");
    gets(str);

    for(int i = 0; str[i]!='\0'; i ++)
    {
        str[i] = tolower(str[i]);
        freq[(int)str[i]]++;
    }

    int max = 0;
    char max_char;


    for(int i = 0; i < 256; i ++)
    {
        if(freq[i] > max)
        {
            max = freq[i];
            max_char = (char)i;
        }
    }

    printf("\nThe maximum occurring character is %c occurring %d times", max_char, max);
    return 0;
}