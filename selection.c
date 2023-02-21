#include<stdio.h>
void sprt()
{
    
}
void main()
{

    // ////////insertion sort
    int arr[6]={10,11,12,13,45,78};
    int n=6;
    for (int i = 0; i < n; i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                min=j;
            }
        }
       int x=arr[min];
       arr[i]=arr[min];
       arr[min]=x;
    }
    for(int i=0;i<6;i++)
    {
        printf("%d ",arr[i]);
    }

}