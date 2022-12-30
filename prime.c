#include<stdio.h>
int main()
{
  int i,num;
  printf("Enter the number:");
  scanf("%d",&num);
  for(i=2;i<=num;i++)
  {
    if(num%i==0)
    {
    break;
    }
  }
  if(num==i)
  {
  printf("\n prime");
  }
  else
  {
  printf("\n Not prime");
  }
  return 0; 
}
  
