#include <stdio.h>
#include <stdlib.h>

int fac(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return n*fac(n-1);
}

int main()
{
    int n;
    printf("Input the number: ");
    scanf_s("%d",&n);
    printf("Fac(%d):%d",n,fac(n));

    return 0;
}