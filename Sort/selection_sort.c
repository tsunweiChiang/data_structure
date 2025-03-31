#include <stdio.h>
#include <stdlib.h>

void selection_sort(int *);

int main()
{
    int arr[5]={6,8,2,1,9};
    int i;
    selection_sort(arr);

    for(i=0;i<5;i++)
    {
        printf("%d",arr[i]);
    }

    return 0;
}

void selection_sort(int *arr)
{
    int i,j,min;
    for(i=0;i<5;i++)
    {
        min=i;
        for(j=i+1;j<5;j++)
        {
            if(arr[j]<arr[min])
                min=j;
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}
