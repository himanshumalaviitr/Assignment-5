//Write a program to print the first N odd natural numbers in reverse order.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter any no: ");
    scanf("%d",&n);
    while(n)
    {
      printf("%d ",2*n-1);
      n--;
    }
    return 0;
}
