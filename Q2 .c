//Write a program to print the first N natural numbers.

#include<stdio.h>
int main()
{
    int n,i=1;
    printf("Enter any no: ");
    scanf("%d",&n);
    while(i<=n)
    {
      printf("%d ",i);
      i++;
    }
    printf("\n");
    return 0;
}
