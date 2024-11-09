#include<stdio.h>
int main()
{
        int n,arry[100],i,num;
        printf("enter the size of arry\n");
        scanf("%d",&n);
        for(i=0;i<n;i++){
                printf("enetr element %d",i+1);
                scanf("%d",&arry[i]);}
        printf("your arry is :\n");
        for(i=0;i<n;i++){
                printf("%d\t",arry[i]);}                                       
        printf("\nenter the number for scalar multiplication\n ");             
        scanf("%d",&num);                                                      printf("arry after scalar multiplication\n");
        for(i=0;i<n;i++){
                printf("%d\t",arry[i]*num);}
        printf("\n");
}
