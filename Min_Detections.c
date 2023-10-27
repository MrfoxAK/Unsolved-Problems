#include <stdio.h>
#include <string.h>

int isPalindrone(char s[]){
     int len = strlen(s);
     int i = 0;
     int flag=0;
     if (len % 2 == 0)
     {
          while (i <= len/2-1)
          {
               if(s[i] == s[len-i-1]){
                    i++;
                    continue;
               }
               else{
                    flag = 1;
                    break;
               }
          }
     }
     else if (len % 2 != 0)
     {
          while (i <= len/2)
          {
               if(s[i] == s[len-i-1]){
                    i++;
                    continue;
               }
               else{
                    flag = 1;
                    break;
               }
          }
     }
     if(flag == 0){
          return 1;
     }
     else{
          return 0;
     }
}

int main()
{
     char s[15];
     printf("Enter the S: ");
     gets(s);
     // puts(s);
     printf("The %d is indecate it's palindrome or not.",isPalindrone(s));
     int i = 0;
     int len = strlen(s);
     // while (i<=len-1)
     // {

     //      i++
     // }
     
     return 0;
}