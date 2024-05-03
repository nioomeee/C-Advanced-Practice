// WAP that accepts a character from user and write it to file and read it from file.
#include<stdio.h>

int main()
{
    FILE *fp;
    char ch, c;
    fp = fopen("new.txt", "w+");

    printf("Enter the character: ");
    scanf(" %c", &ch);

    fputc(ch, fp);
    
    rewind(fp);

    c = fgetc(fp);

    printf("The characater is: %c", c);
    fclose(fp);
    return 0;
}