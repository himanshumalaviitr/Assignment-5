//Write a program to print the first N even natural numbers

#include<stdio.h>
int main()
{
    int n,i=1;
    printf("Enter any no: ");
    scanf("%d",&n);
    while(i<=n)
    {
      printf("%d ",2*i);
      i++;
    }
    return 0;
}
