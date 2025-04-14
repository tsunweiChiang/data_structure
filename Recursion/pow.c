#include <stdio.h>
#include <stdlib.h>

int po(int n,int p)
{
    if(p==0)
        return 1;
    else
        return n*po(n,p-1);
    
};

int main()
{
    int base,p;
    printf("Input the number: ");
    scanf_s("%d,%d",&base,&p);
    printf("%d of power %d is : %d",base,p,po(base,p));
}