#include<stdio.h>
#include<string.h>
int main()
{
        char str1[100],str2[100];
        int i,flag;
        printf("enter first string\n");
        scanf("%s",str1);
        printf("enter second string\n");
        scanf("%s",str2);
        for(i=0;str1[i]!='\0'&&str2[i]!='\0';i++){
                if(str1[i]!=str2[i]){
                        flag=1;}
        }
        if (flag==1){
                printf("not equal\n");
        }
        else {
                printf("equal\n");
        }
}
