// WAP which will use fseek() function .
#include<stdio.h>

int main()
{
    FILE *fp;
    char str[10];
    fp = fopen("name.txt", "r");

    fseek(fp, 6, SEEK_SET);
   
    fgets(str, 10, fp);

    printf("%s", str);
   
    return 0;
}