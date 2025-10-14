//WAP that accepts the marks of 5 subjects and finds the sum and percentage marks obtained

#include<stdio.h>
int main()
{
    int p,c,m,h,e,sum;
    float per;
    printf("enter mark of p,c,m,h,e");
    scanf("%d%d%d%d%d",&p,&c,&m,&h,&e);
    sum=p+c+m+h+e;
    per=(float)sum/5;
    printf("TOTAL MARKS=%d",sum);
    printf("YOURS PERCENTAGE=%.2f",per);
    return 0;

}
