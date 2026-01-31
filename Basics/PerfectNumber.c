// Logic to find Given number is perfect Number or not

#include<stdio.h>

int main()
{
  int num=0,sum=0;
  printf("Enter the number:");
  scanf("%d",&num);
  
  for(int i=1;i<num;i++)
  {
     if(num%i==0)
     {
        sum=sum+i;
     }
  }
  
  if(sum==num)
  {
    printf("The Given number is perfect Number");
  }
  else
  {
     printf("The Given number is Not a perfect Number");
  }
}