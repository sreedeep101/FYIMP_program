#include<stdio.h>
#include<math.h>
int main()
{int a=4;
while(a==4){
    float a,b,c,d,X1,X2;
    printf("\nax²+bx+c\n");
    printf("enter a \n");
    scanf("%f",&a);
    printf("enter b \n");
    scanf("%f",&b);
    printf("enter c \n");
    scanf("%f",&c);
    d=(b*b)-(4*a*c);
    X1=((-b)+sqrt(d))/(2*a);
    X2=((-b)-sqrt(d))/(2*a);
    printf("x=%.2f,%.2f",X1,X2);
}}
