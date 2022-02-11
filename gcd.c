//Write a C program to find the gcd of a number
#include <stdio.h>

int main(void)
{
    int a, b;
    printf("Enter numbers a and b: ");
    scanf("%d %d",&a, &b);
    
    int gcd = 1;
    int max = a>b? a:b;
    
    for (int i = 1; i < max; i++)
    {
        if(a%i == 0 && b%i == 0)
            gcd = i;
    }
    printf("GCD(%d,%d)= %d\n",a,b,gcd);
    return 0;
}
