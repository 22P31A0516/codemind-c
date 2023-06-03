#include<stdio.h>
int main()
{
    int a,b,i,q,r,c=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        q=i;
        c=0;
        while(q)
        {
            r=q%10;
            q=q/10;
            c=c*10+r;
        }
        if(i==c)
        printf("%d ",i);
    }
}