// Create a text file titled by your name, write your name with surname in it.Write a C
// program to change the surname of your name written in a file.
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    FILE *fp;
    char str[30], old[10], new[30], name;

    fp = fopen("name.txt", "r");

    char *flag;

    fgets(str, 30, fp);

    flag = strchr(str, ' ');

    strcpy(old, flag+1);
    flag[1]='\0';

    fclose(fp);

    printf("ENter the new surname: ");
    gets(new);

    strcat(str, new);

    fp = fopen("name.txt", "w");

    fputs(str, fp);

    fclose(fp);

    printf("The old surname was %s, new surname is %s", old, new);

    return 0;
}