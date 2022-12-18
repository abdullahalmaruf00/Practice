#include<stdio.h>
int main()
{
    FILE* inputfile=fopen("input.txt","r");
    if(inputfile==NULL)
    {
        printf("Input file not found!");
        return 0;
    }
    FILE* outputfile=fopen("output.txt","w");
    int n;
    fscanf(inputfile,"%d",&n);
    int i,j,k;
    for(i=n;i>0;i--)
    {
        for(j=i-1;j>0;j--)
        {
            fprintf(outputfile," ");
        }
        for(k=0;k<n;k++)
            fprintf(outputfile,"#");
        fprintf(outputfile,"\n");
    }

    fclose(inputfile);
    fclose(outputfile);
    return 0;
}
