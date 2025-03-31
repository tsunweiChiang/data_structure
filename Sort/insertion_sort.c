#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int *);

int main()
{
    int arr[5]={6,5,2,1,3};

    insertion_sort(arr);
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}

void insertion_sort(int *arr)
{
    int i;
    for(i=1;i<5;i++)
    {
        int pre=i-1;
        int cur=arr[i];

        while(pre>=0 && arr[pre]>cur)
        {
            arr[pre+1]=arr[pre];
            pre--;
        }
        arr[pre+1]=cur;
    }
}