#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define len 5
void bubble_sort(int *);
void bubble_sort_improve(int *);
int main()
{
    int arr[len]={6,5,2,1,3};
    int arr1[len]={1,2,3,4,5};
    bubble_sort_improve(arr1);
    int i;
    for(i=0;i<len;i++)
    {
        printf("%d",arr1[i]);
    }
}

void bubble_sort(int *arr)
{
    int i,j;
    for(i=0;i<len;i++)
    {
        for(j=0;j<len-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
//add flag:best O(n)
void bubble_sort_improve(int *arr)
{
    int i,j;
    bool swap=false;
    for(i=0;i<len;i++)
    {
        for(j=0;j<len-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap=true;
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        if(!swap)
        {
            printf("Best case\n");
            break;
        }
            
    }

}