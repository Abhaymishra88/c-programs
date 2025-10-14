#include<stdio.h>
int main()
{
    int n ,a,b;
    printf("enter 1 for sum\n,enter2 for sub\n,enter 3 for multi\n,enter 4 for divide,\n enter 5 for modulus");
    scanf("%d",&n);
    printf("enter two number"); 
    scanf("%d%d",&a,&b);
    switch(n){
        case 1:
        printf("sum is %d",a+b);
        break;
        case 2:
        printf("sub is %d",a-b);
        break;
        case 3:
        printf("multi is %d",a*b);
        break;
        case 4:
        if (b==0){
            printf("division is not possible")/n;
        }
            break;
            case 5:
                if (b==0){
            
            printf("modulus is not possible");
        }
        else{
              printf("divide is%2f",a/b);
        }
             else{
                printf("modulus is %2f",a%b==0);
        }
      break;
      default:
      printf("invalid");
      return 0;
    }


}
