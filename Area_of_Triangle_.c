#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    float s,t;
    s=(a+b+c)*0.5;
    t=pow(s*(s-a)*(s-b)*(s-c),0.5);
    printf("%0.2f",t);
}