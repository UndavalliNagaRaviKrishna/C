// Logic to print Right Angle triangle

#include <stdio.h>

int main()
{
  int row=0;
  printf("Enter the number of Rows:");
  scanf("%d",&row);
  
  for(int i=0;i<row;i++)
  {
     for(int j=0;j<=i;j++)
     {
        printf("* ");
     }
     printf("\n");
  }      
}