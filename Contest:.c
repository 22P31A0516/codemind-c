#include<stdio.h>
int main()
{
    int a,b,c,x;
    scanf("%d%d%d",&a,&b,&c);
    x=b+(2*c);
    if(a<=x)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}