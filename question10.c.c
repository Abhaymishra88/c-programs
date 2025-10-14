#include<stdio.h>
int main()
{
    int p,c,m,h,e,sum;
    float per;
    printf("enter marks of p,c,m,h,e");
    scanf("%d%d%d%d%d",&p,&c,&m,&h,&e);
    sum=p+c+m+h+e;
    per=sum/5;
    printf("sum of p c m h e=%d",sum);
    printf("per of p c m h e%2f=",per);
    if(per>90)
    {
        printf("grade is A++");
    }
    else if(per>80)
    {
        printf("grade is A");
}
else if(per>=70)
{
    printf("grade is C");
}
 else{
    printf("grade is D(fail)"); 
 }
 return 0;
}