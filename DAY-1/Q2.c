#include <stdio.h>
int main ()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    printf("\nThe multiplication table of %d is given below:\n",n);

    for(int i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",n,i,n*i);
    }
    return 0;
}