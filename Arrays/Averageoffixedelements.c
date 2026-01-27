// Logic to find Average of the fixed size integer array elements and 
// print the output in float values

#include<stdio.h>
 
int main()
{
  int arr[5]={3,5,8,1,3};
  int sum=0;
  float avg=0;
  for(int i=0;i<5;i++)
  {
     sum=sum+arr[i];
  }
   avg=sum/5;
   printf("%0.2f\n", avg);
} 
