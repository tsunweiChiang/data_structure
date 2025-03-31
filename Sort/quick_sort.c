#include <stdio.h>
#include <stdlib.h>

void quick_sort(int *,int l,int r);

int main()
{
    int arr[5]={6,8,2,1,9};
    int i;
    quick_sort(arr,0,4);

    for(i=0;i<5;i++)
    {
        printf("%d",arr[i]);
    }

    return 0;
}

void quick_sort(int *arr,int l,int r)
{
    int i,j,pivot;
    if(l>=r)
        return;
    pivot=arr[l];
    i=l;
    j=r;
    while(i!=j)
    {
        
        while(i<j && arr[j]>=pivot)
            j--;
        while(i<j && arr[i]<=pivot)
            i++;
        if(i<j)
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        } 
    }

    arr[l]=arr[i];
    arr[i]=pivot;
    
    quick_sort(arr,l,i-1);
    quick_sort(arr,i+1,r);
}
