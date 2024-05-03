// WAP to count characters in a file. 
#include<stdio.h>
#include<string.h>

int main()
{
    FILE *fp;
    char str[20];
    int length = 0;

    fp = fopen("demo.txt", "r");

    if(fp!=NULL)
    {
        fgets(str, 20, fp);
        length = strlen(str);

        printf("The length of the string: %d", length);
        
        fclose(fp);
    }
    else
    {
        printf("Unable to open the file");
        return 1;
    }
    return 0;
}