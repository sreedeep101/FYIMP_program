#include<stdio.h>
int main()
{
        int arry1[100],arry2[100],add[100];
        int i,size;
        printf("enter size of the arry\n");
        scanf("%d",&size);
        printf("enter elements in the arry1\n");
        for(i=0;i<size;i++){
                        printf("enter element%d\n",i+1);
                        scanf("%d",&arry1[i]);
        }
        printf("enter elements in the arry2\n");
        for(i=0;i<size;i++){                                                                                    printf("enter element%d\n",i+1);                                                          scanf("%d",&arry2[i]);
        }
        printf("the arry1 is \n");
        for(i=0;i<size;i++){
                  printf("%d\t",arry1[i]);                                                      }
        printf("\nthe arry2 is \n");
        for(i=0;i<size;i++){
                  printf("%d\t",arry2[i]);
        }
        printf("\nthe added arry is \n");
for(i=0;i<size;i++){
        add[i]=arry1[i]+arry2[i];
printf("%d\t",add[i]);}
printf("\n");

}
