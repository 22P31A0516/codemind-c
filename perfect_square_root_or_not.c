#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(n==i*i)
        {
            printf("True");
            c++;
            break;
        }
    }
    if(c==0)
    {
        printf("False");
    }
}