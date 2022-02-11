//rabbit problem
#include <stdio.h>

int fib(int n);

int main(void)
{
    int n;
    printf("Enter n: "); //number of months for rabbits
    scanf("%d",&n);

    printf("The number of rabbits = %d",fib(n));
    return 0;
}

int fib(int n)
{
    if (n<= 1) return n;
    else return (fib(n-1) + fib(n-2));
}

