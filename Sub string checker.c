#include<stdio.h>
#include<string.h>
int main()
{
while(1)
  {
    char str1[100],substr[100];
    char* a;
    printf("\nenter the main string\n");
    scanf("%s",str1);
    printf("enter the sub string\n");
    scanf("%s",substr);
    a=strstr(str1,substr);
    if(a)
    {
        printf("\"%s\" is a sub string of \"%s\"",substr,str1);
    }
    else
    {
        printf("\"%s\" is not a sub string of \"%s\"",substr,str1);
    }
  }
}
