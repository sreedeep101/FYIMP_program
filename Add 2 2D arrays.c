#include<stdio.h>
int main()                                                                                                            
{
        int arry1[100][100],arry2[100][100];
        int i,j,row,col;
        printf("enter number of row of arry\n");
        scanf("%d",&row);
        printf("enter number of colum of arry\n");
        scanf("%d",&col);
        printf("enter arry1\n");
        for(i=0;i<row;i++){
                for(j=0;j<col;j++){
                        printf("enter element a(%d,%d)\n",i+1,j+1);
                        scanf("%d",&arry1[i][j]);
                }                                                                                                             
        }
        printf("enter arry2\n");
        for(i=0;i<row;i++){
                for(j=0;j<col;j++){                                                
                  printf("enter element a(%d,%d)\n",i+1,j+1);                                                                                                                                      
                  scanf("%d",&arry2[i][j]);
                }                                                                                                             
        }
        printf("\n_________________\nthe arry 1 you entered is :\n");
        for(i=0;i<row;i++){                                                
          for(j=0;j<col;j++){
                        printf("%d\t",arry1[i][j]);
                }
        printf("\n");
        }
        printf("\n_________________\nthe arry 2 you entered is :\n");
        for(i=0;i<row;i++){                                                
          for(j=0;j<col;j++){
                        printf("%d\t",arry2[i][j]);                        
          }                                                 
          printf("\n");
        }
        printf("\n_________________\nthe added arry is :\n");
        for(i=0;i<row;i++){                                                
          for(j=0;j<col;j++){
                        printf("%d\t",arry1[i][j]+arry2[i][j]);                       
          }                                                  
          printf("\n");
        }
}
