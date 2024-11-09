#include<stdio.h>
int main()
{
        int arry[100],n,i,find,flag,position;
        printf("enter size of the arry\n");
        scanf("%d",&n);
        for(i=0;i<n;i++){
                printf("enter element%d\n",i+1);
                scanf("%d",&arry[i]);
        }
        printf("enter the number you want to serch\n");
        scanf("%d",&find);
        printf("your arry is :\n");                                            
        for(i=0;i<n;i++){                                                              
         printf("%d\t",arry[i]);                                               
         if(find==arry[i]){
                        flag=1;
                        position=i;
                }
        }                                                                      
        printf("\n");
        if (flag==1){
                printf("%d is an element\n",find);
                printf("It is the %d th element in the arry ",position);}
        else{
                printf("%d is not an element\n",find);
        }
}
