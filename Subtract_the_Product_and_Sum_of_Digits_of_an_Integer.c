#include<stdio.h>
int main()
{
    int n,q,r,s=0,d=1,p;
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        r=q%10;
        q=q/10;
        s=s+r;
        d=d*r;
        p=d-s;
    }
    printf("%d",p);
}