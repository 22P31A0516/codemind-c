#include<stdio.h>
#include<math.h>
int main()
{
    double p,r,t;
    scanf("%lf%lf%lf",&p,&r,&t);
    float ci;
    ci=p*(pow((1+r/100),t)-1);
    printf("%0.2f",ci);
}