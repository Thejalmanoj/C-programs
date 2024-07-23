#include <stdio.h>
int main()
{
  int a=0,b=1,c=0,n;
  printf("Enter the limit:\n");
  scanf("%d",&n);
  printf("%d",a);
  printf("%d",b);
  c=a+b;
  for(int i=3;i<=n;i++)
  {
    printf("%d",c);
    a=b;
    b=c;
    c=a+b;
  }
}
