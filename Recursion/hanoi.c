#include <stdio.h>
#include <stdlib.h>
int count=0;
void hanoi(int n,char A,char B,char C)
{
    if(n==1)
    {
        printf("Move disk 1 form %c to %c\n",A,C);
        return;
    }       
    else
        hanoi(n-1,A,C,B);
        printf("Move disk %d from %c to %c\n", n, A, C);
        hanoi(n-1,B,A,C);
}

int main()
{
    int num;
    printf("Input the number:");
    scanf_s("%d",&num);
    hanoi(num,'A','B','C');
    printf("%d",count);
}