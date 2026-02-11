// Logic to swap two number without using a third variable

#include <stdio.h>

int main()
{
  int n1=0, n2=0;
  printf("Enter the Number1:");
  scanf("%d",&n1);
  printf("Enter the Number2:");
  scanf("%d",&n2);
  printf("Before swap\n");
  printf("Number1:%d\n", n1);
  printf("Number2:%d\n", n2);
  n1=n1^n2;
  n2=n1^n2;
  n1=n1^n2;
  printf("After swap\n");
  printf("Number1:%d\n", n1);
  printf("Number2:%d\n", n2);
}