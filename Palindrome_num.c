#include <stdio.h>
int main()
{
  int num,rev=0,rem,temp;
  printf("Enter the number:\n");
  scanf("%d",&num);
  temp=num;
  while(num>0)
  {
    rem=num%10;
    rev=rev*10+rem;
    num/=10;
  }
  if(temp==rev)
  {
    printf("Palindrome");
  }
  else
  {
    printf("Not palindrome");
  }
}
