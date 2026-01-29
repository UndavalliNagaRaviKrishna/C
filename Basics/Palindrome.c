//Logic to find given number is Palindrome or Not

#include <stdio.h>

int main()
{
    int num=0, dig=0, sum=0;
    printf("Enter the number:");
    scanf("%d", &num);
    
    int val=num;
    while(val!=0)
    {
        dig=val%10;
        sum=sum*10+dig;
        val=val/10;
    }
    if(num==sum)
    {
        printf("Given Number %d is palindrome", num);
    }
    else
    {
        printf("Given Number %d is Not a palindrome", num);
    }
}
