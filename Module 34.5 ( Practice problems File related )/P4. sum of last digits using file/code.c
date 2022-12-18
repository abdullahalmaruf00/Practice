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
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int a;
        fscanf(inputfile,"%d",&a);
        int b=a%10;
        sum+=b;
    }
    fprintf(outputfile,"%d",sum);
    fclose(inputfile);
    fclose(outputfile);
    return 0;
}
