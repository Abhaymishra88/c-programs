 #include<stdio.h>
 int main()
 {
    const float pi=3.14;
    float r,circumfrance,area;  
    printf("enter radius of circle");
    scanf("%f",&r);
    area=pi*3.14*r*r;
    printf("area pf circle=%2f",area);
    circumfrance=2*pi*r;
    printf("enter the circumfrance=%2f",circumfrance);
    return 0;
 } 