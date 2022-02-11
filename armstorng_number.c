//Write a C program to check if a given number is an armstrong number or not
//153 = 1^3 + 5^3 + 3^3

#include <stdio.h>
#include <math.h>

int main(void)
{
    int num;
    printf("Enter number to check: ");
    scanf("%d",&num);
    
    int sum = 0;
    int temp = num;
    
    int count = 0;//number of digits
    while(temp != 0)
    {
        count++;
        temp /= 10;
    }
    
    temp = num; //reinitialisation
    while(temp != 0)
    {
        int rem = temp % 10;
        sum += pow(rem,count);
        temp /= 10;
        
    }
    
    if (sum == num)
        printf("Armstrong number\n");
    
    else 
        printf("Not an Armstrong number\n");
    
    return 0;
}
