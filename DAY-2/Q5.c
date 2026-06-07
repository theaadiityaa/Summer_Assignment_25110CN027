# include<stdio.h>
//Function to calculate sum of all digits in a number
int Sum(int n)
{ 
   int sum = 0;
   while (n != 0)
   {
       sum = sum + n % 10;
       n = n/10;
   }
   return sum;
}

int main()
{
  int n;
  printf("Enter a Number: ");
  scanf("%d",&n);

  if (n<0)
  {
    n = -n;
  }

  printf("Sum of all digits in given number %d is %d ",n, Sum(n));
  return 0;
}