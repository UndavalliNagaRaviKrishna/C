// Logic to print oppsite side right angle triangle
/* OUTPUT: for 6 rows          
             *
           * *
         * * *
       * * * *
     * * * * *
   * * * * * * 
  */

#include <stdio.h>

int main()
{
  int row=0;
  printf("Enter the number of Rows:");
  scanf("%d",&row);
  
  for(int i=0;i<=row;i++)
  {
     for(int j=0;j<row-i;j++)
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
        
