#include <stdio.h>

void print(int *arr, int max)
{
    for (int i = 0; i < max; i++)
    {
        printf("%d\t", arr[i]);
    }
}



void reverse(int *arr, int max)
{
    int last = max-1;
    for (int i = 0; i < max / 2; i++)
    {
        int temp;
        temp=arr[i];
        arr[i]=arr[last];
        arr[last]=temp;
        last--;
    }
}
int main()
{
    int a = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    print(arr, a);
    reverse(arr, a);
    printf("\n");
    print(arr, a);
    return 0;
}