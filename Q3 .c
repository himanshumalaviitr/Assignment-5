//Write a program to print the first N natural numbers in reverse order

#include<stdio.h>
int main()
{
    int n;
    printf("Enter any no: ");
    scanf("%d",&n);
    while(n)
    {
      printf("%d ",n);
      n--;
    }
    printf("\n");
    return 0;
}
