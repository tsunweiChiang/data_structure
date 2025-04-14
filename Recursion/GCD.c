#include <stdio.h>
#include <stdlib.h>

int gcd(int a,int b)
{
    if(a%b==0)
        return b;
    else
        return gcd(b,a%b);
}

int main()
{
    int a,b;
    printf("Input two number:");
    scanf_s("%d %d",&a,&b);
    printf("GCD(%d,%d): %d",a,b,gcd(a,b));
}