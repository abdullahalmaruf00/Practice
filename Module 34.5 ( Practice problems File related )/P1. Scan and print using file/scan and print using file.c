#include<stdio.h>
int main()
{
    FILE* inputfile = fopen("input.txt","r");
    FILE* outputfile = fopen("output.txt","w");
    if(inputfile==NULL)
    {
        printf("Input file not found.");
        return 0;
    }
    while(1)
    {
        char a=fgetc(inputfile);
        if(a==EOF)
            break;
        fputc(a,outputfile);
    }
}
