#include<stdio.h>
int main()
{
 {
 int i,n,sum,c;
 printf("\n \nenter number\n");
 scanf("%d",&n);
 for(i=0;i<=n;i++)
 {
  c=i%2;  
 if(c==1)
 {sum=sum+i;
 printf("%d+%d=%d \n",sum-i,i,sum);}
 }
 }
}
