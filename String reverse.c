#include<stdio.h>
#include<string.h>
int main()
{
        char temp,str[100],rev[100];
        int i,len;
        printf("enter a string\n");
        scanf("%s",str);
        len=strlen(str);
        for(i=0;i<(len/2);i++){
                temp=str[i];
                str[i]=str[len-1-i];
                str[len-1-i]=temp;
        }                                                     printf("the reversed string is ;\n\"%s\"\n",str);
}
