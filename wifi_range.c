#include <stdio.h>
int main()
{
     int n=8,x=1;
     int s[] = {1,0,0,1,0,0,0,1};
     int cx = x;
     int j=0;
     for (int i = 0; i < n;)
     {
          cx=x;
          j=1;
          if(s[i]==1){
               if(cx!=0){
                    while(cx>=j){
                         printf("%d\n",j);
                         s[i+j-cx] = 1;
                         s[i+cx] = 1;
                         j++;
                         // cx--;
                    }
                    i+=cx;
               }
               else{
                    i++;
               }
          }
          else{
               i++;
          }
     }
     for (int i = 0; i < n; i++)
     {
          printf("%d ",s[i]);
     }
     return 0;
}