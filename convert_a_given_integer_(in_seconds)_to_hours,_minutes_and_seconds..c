#include<stdio.h>
int main()
{
    int sec;
    scanf("%d",&sec);
    int h,min,s;
    h=sec/3600;
    min=(sec-(3600*h))/60;
    s=(sec-(3600*h)-(min*60));
    printf("H:M:S-%d:%d:%d",h,min,s);
}