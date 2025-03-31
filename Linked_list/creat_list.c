#include <stdio.h>
#include <stdlib.h>

struct node
{
    /*data & link*/
    int data;
    struct node *next;
};


struct node *creatlist(int *arr,int length)
{
    struct node *current,*first=NULL,*previous;
    int i;
    for(i=0;i<length;i++)
    {
        current=(struct node *)malloc(sizeof(struct node));
        current->data=arr[i];
        if(first==NULL)
            first=current;
        else
            previous->next=current;
        current->next=NULL;
        previous=current;
    }

    return first;
}

int main()
{
    int arr[]={1,2,3,4,5,6};

    struct node *list=creatlist(arr,6);
    
    while(list!=NULL)
    {
        if(list->next==NULL)
            printf("%d->NULL",list->data);
        else
            printf("%d->",list->data);
        list=list->next;
    }
}

