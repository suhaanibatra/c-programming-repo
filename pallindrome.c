//write a c program to check if a given number is pallindrome or not
#include <stdio.h>

void check_pallindrome(int num);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    check_pallindrome(n);
    return 0;
}

void check_pallindrome (int num)
{
    int temp = num, flag = 0;
    int rev = 0;
    while(temp != 0)
    {
        int rem = temp % 10;
        rev = rev*10 + rem;
        temp /= 10;
    }
    
    if (rev == num)
        printf("The given number is a pallindrome\n");

    else
        printf("The given number is not a pallindrome\n");
  
    return 0;
}
