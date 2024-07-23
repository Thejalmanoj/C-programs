#include <stdio.h>
int main()
{
  int num,temp,rem,val=0,count=0;
  printf("Enter the number:");
  scanf("%d",&num);
  temp=num;
  while(num>0)
  {
    rem=num%10;
    val=val+(rem*rem*rem);
    num/=10;
  }
  if(val==temp)
  {
    printf("Armstrong");
  }
  else
  {
    printf("Not armstrong");
  }
}
