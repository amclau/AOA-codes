#include<stdio.h>

int calculate(int initialDelay[12][4],int h)
{
    //    int JA=8,JI=10,JH=12,JK=6;
       int bMat[4]={8,10,12,6};
       int resmat[4];
       for (int i = 0; i < 4; i++)
       {
        resmat[i]=initialDelay[h][i]+bMat[i];
        // printf("code return   %d sum is ",resmat[i]);
       }
       int minindex=100000;
    int min = resmat[0];    
        
    //Loop through the array    
    for (int i = 0; i < 4; i++) {     
        //Compare elements of array with min    
       if(resmat[i] < min)    
       {
           min = i; 
       }   
    }      
    // printf("Smallest element present in given array: %d\n", min);    
    return resmat[min];    

       
}
int main()
{
    int initialDelay[12][4] = {
                    //A   I   H   K
            /*A*/     {0,24,20,21},
            /*B*/     {12,36,31,28},
            /*C*/     {25,18,19,36},
            /*D*/     {40,27,8,24},
            /*E*/     {14,7,30,22},
            /*F*/     {23,20,19,40},
            /*G*/     {18,31,6,31},
            /*H*/     {17,20,0,19},
            /*I*/     {21,0,14,22},
            /*J*/     {9,11,7,10},
            /*K*/     {24,22,22,0},
            /*L*/     {29,33,9,9},
        };


//  int res=calculate(initialDelay,0);
    for (int i = 0; i < 12; i++)
    {
       int res=calculate(initialDelay,i);
       printf("\n %d",res);
    }
    


}