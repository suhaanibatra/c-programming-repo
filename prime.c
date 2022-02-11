//Write a C program to check if a number is prime or not
#include <stdio.h>

int checkPrime(int n);

int main(void)
{
    int num;
    printf("Enter a number to check: ");
    scanf("%d",&num);
    
    if(checkPrime(num) == 0)
        printf("PRIME\n");
    else 
        printf("NOT PRIME\n");
}

int checkPrime(int n)
{
    int flag = 0; //PRIME
    for(int i = 2; i*i <n; i++)
    {
        if(n%i == 0)
        {
            flag = 1; //NOT PRIME
            break;
        }
    }
    return flag;
}
