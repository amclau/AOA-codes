 #include<stdio.h>
#include<stdlib.h>
void main()
{
    int source;
    int result[12];
    int vector[12][4];
    int S[4];
    int temp;
    
    printf("\nEnter the source node : ");
    scanf("%d",&source);
   
    printf("\nEnter the distance of the 4 direct links : ");
    for(int i=0;i<4;i++)
    {
        scanf("%d",&S[i]);
    }
    
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<4;j++)
        {
            vector[i][j]=rand()%20 + 1;
        }
    }
    
    for(int i=0;i<4;i++)
    {
        vector[i][i]=0;
    }
    
    for(int i=0;i<12;i++)
    {
         for(int j=0;j<4;j++)
         {
             printf("%3d ",vector[i][j]);
         }
         printf("\n");
    }
    
    for(int i=0;i<12;i++)
    {
            result[i]=vector[i][0]+S[0];
    }
    printf("\n\n");

    for(int i=0;i<12;i++)
    {
        for(int j=0;j<4;j++)
        {
            temp=S[j]+vector[i][j];
            if(temp<=result[i])
            {
                result[i]=temp;
            }
            if(i==source)
            {
                result[i]=0;
            }
        }
    }
    
    for(int i=0;i<12;i++)
    {
        printf("%d ",result[i]);
    }
}