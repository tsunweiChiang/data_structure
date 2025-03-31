#include <stdio.h>
#include <stdlib.h>
void heap_f(int *,int n ,int i);
void heap_sort(int *,int n);
int main()
{
    int arr[5]={6,8,2,1,9};
    int i;
    heap_sort(arr,5);

    for(i=0;i<5;i++)
    {
        printf("%d",arr[i]);
    }

    return 0;
}

void heap_sort(int *arr,int n)
{
    int i,temp;
    for (i = n / 2 - 1; i >= 0; i--) 
    {
        heap_f(arr, n, i);
    }
    for (i = n - 1; i > 0; i--) 
    {
        temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        heap_f(arr, i, 0);
    }
}

void heap_f(int arr[], int n, int i)
{
    int temp, maximum, left_index, right_index;

    // currently assuming i postion to
    // be holding the largest value
    maximum = i;

    // right child index
    right_index = 2 * i + 2;

    // left child index
    left_index = 2 * i + 1;

    // if left index value is grater than the current index
    // value
    if (left_index < n && arr[left_index] > arr[maximum])
        maximum = left_index;

    // if right index value is grater than the current index
    // value
    if (right_index < n && arr[right_index] > arr[maximum])
        maximum = right_index;

    // checking if we needed swaping the elements or not
    if (maximum != i) {
        temp = arr[i];
        arr[i] = arr[maximum];
        arr[maximum] = temp;
        heap_f(arr, n, maximum);
    }
}
