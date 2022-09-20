//WAP to check a whether the number is Armstrong Number or not.
#include <stdio.h>
int main()
{
    printf("Enter a number : ");
    int n,i;
    scanf("%d",&n);
    int m=n,d,s=0;
    while (n>0)
    {
        d=n%10;
        s=s+d*d*d;
        n=n/10;
    }
    if (s==m)
    {
        printf("%d is a armstrong number",m);
    }
    else 
    {
        printf("%d is a not armstrong number",m);
    }
}
