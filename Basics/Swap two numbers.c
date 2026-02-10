// Logic to swap two number using a third variable

#include <stdio.h>

int main()
{
  int n1=0, n2=0, temp=0;
  printf("Enter the Number1:");
  scanf("%d",&n1);
  printf("Enter the Number2:");
  scanf("%d",&n2);
  printf("Before swap\n");
  printf("Number1:%d\n", n1);
  printf("Number2:%d\n", n2);
  temp=n1;
  n1=n2;
  n2=temp;
  printf("After swap\n");
  printf("Number1:%d\n", n1);
  printf("Number2:%d\n", n2);
}