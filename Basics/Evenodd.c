// Logic to find given number is Even or odd


#include<stdio.h>

int main()
{
  int num=0;
  printf("Enter the number:");
  scanf("%d",&num);
  if(num%2==0)
  {
    printf("Given number is Even number");
  }
  else
  {
    printf("Given number is Odd number");
  }
}