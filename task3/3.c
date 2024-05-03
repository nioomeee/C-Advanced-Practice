// WAP to display number 1 to 100. Redirect the output of the program to text file. 
#include<stdio.h>

int main()
{
    FILE *fp;

    fp=fopen("demo.txt", "w");

    for(int i = 1; i < 101; i ++)
    {
        fprintf(fp, "\n%d", i);
    }

    fclose(fp);
    return 0;
}