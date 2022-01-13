#include<stdio.h>
int main()
{
  int num1,num2;
  float sum;
  printf("enter two number\n");
  scanf("%d%d",&num1,&num2);
  sum = num1 + num2;
  printf("Sum of %d + %d = %f \n",num1,num2,sum);
  return 0;
} 