// 7. Write a C program to read data from a file using fgetc() function.
#include<stdio.h>

int main()
{
    FILE *fp;
    char ch;

    fp = fopen("new.txt", "r");

    if(fp != NULL)
    {
        while((ch = fgetc(fp))!=EOF)
        {
            printf("%c", ch);
        }
        fclose(fp);
        return 0;
    }
    else
    {
        printf("Unable to open the file");
        return 0;
    }
    

}