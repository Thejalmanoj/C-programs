#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
#define SPECIAL "!@#$%^&*()"
int main()
{
  char list[100]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789" SPECIAL;
  int size = sizeof(list) - 1;
  srand(time(NULL));
  int n;
  printf("Enter the size of password:\n");
  scanf("%d",&n);
  if(n<4)
  {
      printf("Size should be atleast 4!!");
  }
  else
  {
      char pw[n+1];
      pw[0]='a' + rand() % 26;  
      pw[1]='A' + rand() % 26;  
      pw[2]= '0' + rand() % 10;  
      pw[3]=SPECIAL[rand() % (sizeof(SPECIAL) - 1)];
      for (int i = 4; i <n; i++)
      {
        pw[i]=list[rand() % size];
      }
      for (int i = 0; i < n; i++)
      {
        int j = rand() % n;
        char temp = pw[i];
        pw[i]= pw[j];
        pw[j]= temp;
      }
      pw[n] = '\0'; 
      printf("Password is: %s\n",pw);
  }
}
  
