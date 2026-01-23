//  Logic to find sum of the fixed size array elements

#include <stdio.h>

int main()
{
    int arr[5], sum=0;
    for(int i=0;i<5;i++)
    {
        printf("Enter the array element[%d]:",i);
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<5;i++)
    {
        sum=sum+arr[i];
    }
    
    printf("The sum is:%d",sum);
  
    return 0;
}
