#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int count=0;
void swap(char *s,int i,int j)
{
    char temp=s[i];
    s[i]=s[j];
    s[j]=temp;
}
void prem(char *s,int i,int l)
{
    
    if(i==l)//the end, print string
    {
        count++;
        printf("%s\n",s);
        return;
    }
        
    else
    {
        int j;
        for(j=i;j<=l;j++)
        {
            swap(s,i,j);
            prem(s,i+1,l);
            swap(s,i,j);
        }
    }
}
int main()
{
    char string[]="abcde";
    int len=strlen(string);
    prem(string,0,len-1);
    printf("%d",count);
}