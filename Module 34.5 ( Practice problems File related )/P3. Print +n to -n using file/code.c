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
    int t;
    fscanf(inputfile,"%d",&t);
    for(int i=0;i<t;i++)
    {
        int n;
        fscanf(inputfile,"%d",&n);
        if(n>0)
        {
            int j=n;
            while(n!=-j-1)
            {
                fprintf(outputfile,"%d ",n);
                n--;
            }
        }
        else if(n<0)
        {
            int j=n;
            while(n!=-j+1)
            {
                fprintf(outputfile,"%d ",n);
                n++;
            }
        }
        fprintf(outputfile,"\n");
    }
    fclose(inputfile);
    fclose(outputfile);
    return 0;
}
