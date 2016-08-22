#include <stdio.h>
int func(int);
void main()
{
  int n=0,res=0;
  printf("Enter Number");
  scanf("%d",&n);
 res=func(n);
printf("%d",res);

}
int func(int n)
{
  int rem,new;
  rem=n%10;
  n=n/10;
  if(n==0)
    return 0;
  rem=n%10;
  return rem;
}
