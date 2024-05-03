#include<stdio.h>
#include<string.h>

int main()
{
    FILE *fp;
    char name[15], old[15], new[15];
    char *ch;

    fp = fopen("demo.txt", "r");
    if(fp == NULL)
    {
        printf("File not opened");

    }

    fgets(name, 30, fp);

    printf("%s", name);

    ch = strchr(name, ' ');

    if(ch != NULL)
    {
        strcpy(old, ch+1);
        ch[1] = '\0';
        printf("\nEnter new surname: ");
        scanf("%s", new);
        strcat(name, new);
        fclose(fp);
        fp = fopen("demo.txt", "w");

        fprintf(fp, "%s", name);
        printf("Old surname was %s and new surname is %s", old, new);
        fclose(fp);     
    }
    else                
    {
        printf("Invalid name format");
    }


    return 0;
}