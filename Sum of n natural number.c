#include<stdio.h>
int main()
{
 
 int i,n,sum;
 printf("\n \nenter number\n");
 scanf("%d",&n);
 for(i=0;i<=n;i++)
 {
 
 sum=sum+i;
 printf("%d+%d=%d \n",sum-i,i,sum);
 }
 
 }
