//Write a program to print the first N even natural numbers in reverse order

#include<stdio.h>
int main()
{
    int n;
    printf("Enter any no: ");
    scanf("%d",&n);
    while(n)
    {
      printf("%d ",2*n);
      n--;
    }
    printf("\n");
    return 0;
}
