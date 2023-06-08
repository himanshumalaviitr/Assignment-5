//Write a program to print MySirG N times on the screen

#include<stdio.h>
int main()
{
    int n,i=1;
    printf("Enter any no: ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("MySirG ");
        i++;
    }
    printf("\n");
    return 0;
}
