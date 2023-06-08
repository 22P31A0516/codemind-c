#include<stdio.h>
int main()
{
    int n,q,r,s=0,d=1;
    scanf("%d",&n);
    q=n;
    while(q>0)
    {
        r=q%10;
        s=s+r;
        d=d*r;
        q=q/10;
    }
    if(d==s)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}