#include <stdio.h>
#define row 2
#define col 3

int main()
{
     int c=0;
     int arr[row][col] = {{0,0,0},
                         {0,1,0}};
                         // ,{0,0,0}};
     for (int i = 0; i < row; i++)
     {
          for (int j = 0; j < col; j++)
          {
               printf("%d ",arr[i][j]);
          }
          printf("\n");
     }
     // main code
     int flag=0;
     for (int i = 0; i < row; i++)
     {
          flag=0;
          for (int j = 0; j < col; j++)
          {
               if(arr[i][j]==1){
                    if (arr[i-1][j]==0 && i>=0)
                    {
                         arr[i-1][j]=1;
                         flag=1;
                    }
                    if (arr[i+1][j]==0 && i<row)
                    {
                         arr[i+1][j]=1;
                         flag=1;
                    }
                    if (arr[i][j+1]==0 && j<col)
                    {
                         arr[i][j+1]=1;
                         flag=1;
                    }
                    if (arr[i][j-1]==0 && j>=0)
                    {
                         arr[i][j-1]=1;
                         flag=1;
                    }
                    if (flag==1)
                    {
                         c++;
                    }
                    // c++;
                    // break;
               }
          }
     }
     for (int i = 0; i < row; i++)
     {
          for (int j = 0; j < col; j++)
          {
               printf("%d ",arr[i][j]);
          }
          printf("\n");
     }
     printf("%d",c);
     return 0;
}