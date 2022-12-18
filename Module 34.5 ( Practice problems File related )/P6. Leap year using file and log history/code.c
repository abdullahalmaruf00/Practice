#include<stdio.h>
int main()
{
    FILE* inputfile=fopen("input.txt","r");
    if(inputfile==NULL)
    {
        printf("Input file not found!");
        return 0;
    }
    FILE* outputfile=fopen("output.txt","a");
    int n;
    fscanf(inputfile,"%d",&n);
    if (n%400==0)
    {
        fprintf(outputfile,"%d-->YES\n", n);
    }
    else if (n%100==0)
    {
        fprintf(outputfile,"%d-->NO\n", n);
    }
    else if (n%4==0)
    {
        fprintf(outputfile,"%d-->YES\n", n);
    }
    else
    {
        fprintf(outputfile,"%d-->NO\n", n);
    }
    fclose(inputfile);
    fclose(outputfile);
    return 0;
}
