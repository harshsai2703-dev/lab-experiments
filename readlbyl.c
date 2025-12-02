#include<stdio.h>
int main()
{
    char str[200];
    FILE *fp=fopen("file.txt","r");
    while(fgets(str,200,fp)!=NULL)
    {
        printf("%s", str);
    }
    fclose(fp);
}