#include<stdio.h>
#include<string.h>
int main()
{
        char temp,str[100],rev[100];
        int i,len,flag;                                            printf("enter a string\n");
        scanf("%s",str);
        strcpy(rev,str);
        len=strlen(str);
        for(i=0;i<(len/2);i++){
                temp=rev[i];
                rev[i]=rev[len-1-i];
                rev[len-1-i]=temp;
        if(str[i]!=rev[i]){
                flag=1;
        }
        }
        if(flag==1){
                printf("not paliendrom\n");
        }
        else{
                printf("paliendrom\n");}

}
