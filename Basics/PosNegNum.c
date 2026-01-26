// Logic to find the user given number is Positive or Negative number

#include<stdio.h>

int main()
{
  int num=0;
  printf("Enter the number:");
  scanf("%d",&num);
  if(num>0)
  {
    printf("Given number is Positive number");
  }
  else if(num<0)
  {
    printf("Given number is Negative number");
  }
  else
  {
    printf("zero");
  }
}