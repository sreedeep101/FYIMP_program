#include<stdio.h>
#include<string.h>
int main()
{
        struct student{
                char name[1000];
                int roll,stati,math,cs,aec,mdc;
        };
        struct student std[1000];
        int i,n;                                                                                                                      
        printf("enetr number of students in your class\n");
        scanf("%d",&n);
        for(i=0;i<n;i++){
                        printf("enter name of student%d\n",i+1);
                        scanf("%s",std[i].name);
                        printf("enter roll number of student%d\n",i+1);
                        scanf("%d",&std[i].roll);
                        printf("enter mark of statistics of student%d\n",i+1);
                        scanf("%d",&std[i].stati);
                        printf("enter mark of maths of student%d\n",i+1);
                        scanf("%d",&std[i].math);
                        printf("enter mark of computer science of student%d\n",i+1);
                        scanf("%d",&std[i].cs);
                        printf("enter mark of aec of student%d\n",i+1);
                        scanf("%d",&std[i].aec);
                        printf("enter mark of mdc of student%d\n",i+1);                                         
                  scanf("%d",&std[i].mdc);
                }
                printf("\n_________________________________\n");
                for(i=0;i<n;i++){
                        printf("details of student%d\n",i+1);
                        printf("name                  : \"%s\"\n",std[i].name);
                        printf("roll number           : %d\n",std[i].roll);                                                                   
                        printf("statistics mark       : %d\n",std[i].stati);
                        printf("mathamatics mark      : %d\n",std[i].math);
                        printf("computer science mark : %d\n",std[i].cs);
                        printf("AEC mark              : %d\n",std[i].aec);
                        printf("MDC mark              : %d\n",std[i].mdc);
                        printf("\n_________________________________\n");
                }

}
