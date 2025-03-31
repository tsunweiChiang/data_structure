#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int binary_while(int *arr,int length,int item)
{
    int l=0,r=length-1;;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(arr[mid]==item)
            return mid+1;
        else if(item>arr[mid])
            l=mid+1;
        else
            r=mid-1;
    }

    return -1;
}

int binary_recursion(int *arr,int l,int r,int data)
{
    if(l>=r)
        return -1;
    int mid=(l+r)/2;
    if(arr[mid]==data)
        return mid+1;
    else if(data>arr[mid])
    {
        l=mid+1;
        return binary_recursion(arr,l,r,data);
    }
    else
    {
        r=mid-1;
        return binary_recursion(arr,l,r,data);
    }
}

int main()
{
    int arr[]={1,2,3,5,6,9};
    int i=binary_while(arr,6,5);
    int r=binary_recursion(arr,0,5,4);
    printf("loop:\n");
    if(i==-1)
        printf("Not in array\n");
    else
        printf("in %dth\n",i);
    printf("recursion:\n");
    if(r==-1)
        printf("Not in array\n");
    else
        printf("in %dth\n",r);
}