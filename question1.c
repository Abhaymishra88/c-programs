#include<stdio.h>
int main()
{
    int p,c,m,h,e,sum;
    float per;
    printf("enter mark of p,c,m,h,e");
    scanf("%d%d%d%d%d",&p,&c,&m,&h,&e);
    sum=p+c+m+h+e;
    per=sum/5;
    printf("sum  of p,c,m,h,e=%d",sum);
    printf("printf of per=%.2f",per);
    return 0;

}
