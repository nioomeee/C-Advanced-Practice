// WAP to combine contents of two files in a third file.
#include<stdio.h>
#include<string.h>

int main()
{
    FILE *fp;
    char str1[20], str2[20], str3[40];

    fp = fopen("demo.txt", "r");
    if(fp != NULL)
    {
        fgets(str1, strlen(str1), fp);

        fclose(fp);

        fp = fopen("name.txt", "r");

        if(fp != NULL)
        {
            fgets(str2, strlen(str2), fp);
            fclose(fp);

            strcat(str1, str2);

            fp = fopen("new.txt", "w");
            
            fprintf(fp, "%s", str1);
        }
        else
        {
            printf("File not opened");
            return 0;
        }
    }
    return 0;
}