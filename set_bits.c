//Write a c program to find the number of set bits in a binary number
#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    
    int count = 0;
    
    while(num != 0)
    {
        if (num & 1)
            count++;
        
        num >>= 1;
    }
    printf("Number of set bits = %d",count);
    
    return 0;
}
