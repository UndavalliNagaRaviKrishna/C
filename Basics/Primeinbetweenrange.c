// Logic to find prime numbers in between given range

#include <stdio.h>

int main()
{
    int num1=0, num2=0, flag=1;
    printf("Enter the number1:");
    scanf("%d",&num1);
    printf("Enter the number2:");
    scanf("%d",&num2);
    for(int i=num1;i<num2;i++)
    {
        flag=1;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag)
        {
            printf("%d\t",i);
        }
        else
        {
            continue;
        }
    }
    return 0;
}
