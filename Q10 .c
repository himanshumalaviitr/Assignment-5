//Write a program to print a table of N.

#include<stdio.h>
int main()
{
    int n,i=1;
    printf("Enter any no: ");
    scanf("%d",&n);
    while(i<=10)
    {
      printf("%d\n",i*n);
      i++;
    }
    printf("\n");
    return 0;
}
