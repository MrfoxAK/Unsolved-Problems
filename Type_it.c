#include <stdio.h>
#include <string.h>
int main()
{
     char target[] = "abcabca";
     int tar_size = strlen(target);
     // printf("%d",tar_size);
     char s[tar_size];
     int i=0,c=0,z=0;
     int x=0,y=0;
     char cmp_s[10];
     char cmp_t[10];
     int flag=0;
     while (target[i]!='\0')
     {
          for (int k = 0; k < i; k++)
          {
               cmp_s[k]=s[k];
               // printf("%c",cmp_s[k]);
          }
          // printf("\n");
          y=0;
          for (int k = i; k < 2*i; k++)
          {
               cmp_t[y]=target[k];
               y++;
               // printf("pass : %d\n",k);
               // printf("%c",cmp_t[k]);
          }
          // printf("\n");
          flag = 0;
          for (int k = 0; k < i; k++)
          {
               if (cmp_s[k]!=cmp_t[k])
               {
                    flag=1;
                    // printf("%c",cmp_t[k]);
               }
               // printf("%c",cmp_t[k]);
          }
          printf("%d\n",flag);
          if (flag==0)
          {
               for (z = i; z <2*i ; z++)
               {
                    s[z] = target[z];
               }
               i=z;
               c++;
          }
          // printf("\n");
          s[i] = target[i];
          i++;
          c++;
     }
     s[i]='\0';
     printf("C= %d\n",c-1);
     puts(s);
     // printf("str are %d",strcmp(s,target)); //same if gives 0
     return 0;
}