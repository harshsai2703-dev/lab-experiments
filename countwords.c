#include<stdio.h>
int main()
{
    int words=0;
    int inWord=0;
    char str[200];
    FILE *fp=fopen("file.txt","r");
    if(fp==NULL){printf("file not found");}
    while(fgets(str,200,fp))
    {
    for(int i=0;str[i]!='\0';i++)
    {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t') 
        {
        if (inWord == 0) {
        words++;
        inWord = 1;}
        } 
        else 
            {
                inWord = 0;
            }
    }
    }
     printf("Number of words = %d\n", words);
    fclose(fp);
}