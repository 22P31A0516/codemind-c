#include<stdio.h>
int main()
{
    int n,q,s=0,r;
    scanf("%d",&n);
    q=n*n;
    for(;q!=0;)
    {
        r=q%10;
        q=q/10;
        s=s+r;
    }
    if(s==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}