// Logic to print oppsite side right angle triangle

#include <stdio.h>

int main()
{
  int row=0, col=0;
  printf("Enter the number of Rows:");
  scanf("%d",&row);
  printf("Enter the number of Col:");
  scanf("%d",&col);
  
  for(int i=0;i<row;i++)
  {
     for(int j=col;j>i;j--)
     {
        printf("  ");
     }
     for(int k=0; k<=i;k++)
     {
         printf(" *");
     }
     printf("\n");
  }      
}
        