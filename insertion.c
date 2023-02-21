// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>
// int arr[100];
// void main()
// {
// clock_t start,stop;
// clock_t start_b,stop_b;
// clock_t start_w,stop_w;

//     // ////////insertion sort
    
    
//     start=clock();
//     for(int i=0;i<100;i++)
//     {
//         arr[i]=rand();
//     }
//     int key, j,n=100;
//     for (int i = 1; i < n; i++)
//     {
//         key = arr[i];
//         j = i - 1;
//         while (j >= 0 && arr[j] > key)
//         {
//             arr[j + 1] = arr[j];
//             j = j - 1;
//         }
//         arr[j + 1] = key;
//     }

//     stop=clock();
//     float res=stop-start;
//     printf("\nAvg case CPU time =%f units",res);
//     start_b=clock();

    
//     for (int i = 1; i < n; i++)
//     {
//         key = arr[i];
//         j = i - 1;
//         while (j >= 0 && arr[j] > key)
//         {
//             arr[j + 1] = arr[j];
//             j = j - 1;
//         }
//         arr[j + 1] = key;
//     }
//     stop_b=clock();
//     float x=stop_b-start_b;
//      printf("\nBest case CPU time =%f units",x);
     
//      start_w=clock();

    
//     for (int i = 1; i < n; i++)
//     {
//         key = arr[i];
//         j = i - 1;
//         while (j >= 0 && arr[j] < key)
//         {
//             arr[j + 1] = arr[j];
//             j = j - 1;
//         }
//         arr[j + 1] = key;
//     }
//     stop_w=clock();
//     x=stop_w-start_w;
//      printf("\nworst case CPU time =%f units",x);
     
    
    
    

// }




#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int arr[100];
void sort()
{
    
for(int i=0;i<100;i++)
    {
        arr[i]=rand();
    }
    int key, j,n=100;
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void main()
{
clock_t start,stop;
clock_t start_b,stop_b;
clock_t start_w,stop_w;

    // ////////insertion sort
    
    
    start=clock();
    sort();

    stop=clock();
    float res=stop-start;
    printf("\nAvg case CPU time =%f units",res);
    start_b=clock();

    
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    stop_b=clock();
    float x=stop_b-start_b;
     printf("\nBest case CPU time =%f units",x);
     
     start_w=clock();

    
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] < key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    stop_w=clock();
    x=stop_w-start_w;
     printf("\nworst case CPU time =%f units",x);
     
    
    
    

}
