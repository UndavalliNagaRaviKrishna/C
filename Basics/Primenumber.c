// C programming language to find the given Number is Prime or Not

#include <stdio.h>

int main()
{
    int num=0, flag=1;
    printf("Enter the number:");
    scanf("%d", &num);
    
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            flag=0;
        }
    }
    if(flag)
    {
        printf("Given number is Prime Number");
    }
    else
    {
        printf("Given number is Not Prime Number");
    }

    return 0;
}
