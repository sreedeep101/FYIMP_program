#include<stdio.h>
int main()
{
    int arry[100];
    int i,n,max,min;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    printf("enter the values in the arry\n");
    for(i=0;i<n;i++){
        printf("enter number %d\n",i+1);
        scanf("%d",&arry[i]);
    }
    max=arry[0];
    min=arry[0];
    printf("the array you entered is ;\n");
    for(i=0;i<n;i++){
        if(arry[i]>max){
            max=arry[i];
        }
        else if(arry[i]<min){
            min=arry[i];
        }
        printf("%d\t",arry[i]);
    } 
    printf("\nthe maximum value from the arry is ; \n %d\n",max);
    printf("the minimum value from the arry is ; \n %d\n",min);
}
