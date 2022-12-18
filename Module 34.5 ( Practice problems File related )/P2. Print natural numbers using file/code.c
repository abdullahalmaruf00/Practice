#include<stdio.h>
int main()
{
    FILE* inputfile = fopen("input.txt","r");
    if(inputfile==NULL)
    {
        printf("Input File Not Found!");
        return 0;
    }
    FILE* outputfile = fopen("output.txt","w");
    int n;
    fscanf(inputfile,"%d",&n);
    for(int i=1;i<=n;i++)
    {
        fprintf(outputfile,"%d ",i);
    }
    return 0;
}
