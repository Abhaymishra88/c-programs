#include<stdio.h>
int main()
{
    float p,r,t,si,ci,amount;
    printf("enter principle amount");
    scanf("%f",&p);
    printf("enter rate of intrest");
    scanf("%f",&r);
    printf("enter time");
    scanf("%f",&t);
    si=(p*r*t)/100;
    amount=si+p;
    ci=p*(1+r/100)*(1+r/100)-p;
    printf("simple intrest=%2f\n",si);
    printf("compound intrest=%2f\n",ci);
}