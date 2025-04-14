#include <stdio.h>
#include <stdlib.h>

int bionmal(int n,int m)
{
    if(n==m||m==0)
        return 1;
    else
        return bionmal(n-1,m)+bionmal(n-1,m-1);
}

int main()
{
    int n,i;
    printf("Input the number: ");
    scanf_s("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("%d ",bionmal(n,i));
    }

    return 0;
}