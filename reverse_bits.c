//Write a C program to reverse the bits of an integer

#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    
    int rev_num = 0;
    for (int i = 0; i < sizeof(num)*8 - 1; i++)
    {
        int temp = (num & (1<<i));
        
        if (temp)
            rev_num |= (1<<(sizeof(num)*8 - 1)-i);
    }
    printf("%d\n",rev_num);
  
  return 0;
}
