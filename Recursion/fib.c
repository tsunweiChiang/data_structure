#include <stdio.h>
#include <stdlib.h>

int fib(int n)
{
    if(n==0 || n==1)
        return 1;
    else
        return fib(n-1)+fib(n-2);
};

int main()
{
    int n;
    printf("Input the number: ");
    scanf_s("%d",&n);

    printf("fib(%d): %d",n,fib(n));
}