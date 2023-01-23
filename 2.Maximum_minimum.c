#include<stdio.h>
int main()
{
    int size=5;
    int ar[5]={2,3,1,5,4};
    int min=ar[0];
    int max=ar[0];

    for(int i=0;i<size;i++)
    {
        if(ar[i]>max)
        {
            max=ar[i];
        }
        if(ar[i]<min)
        {
            min=ar[i];
        }
    }

    printf("Minimum is %d and Maximum is %d", min,max);
    return 0;
}