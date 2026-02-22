// Logic to print star

#include <stdio.h>

int main()
{
  int row=0, col=0;
  printf("Enter the number of rows:");
  scanf("%d",&row);
  printf("Enter the number of columns:");
  scanf("%d",&col);
  for(int i=0; i<row;i++)
  {
     for(int j=0; j<col; j++)
     {
        printf("* ");
     }
        printf("\n");
  }
}
        