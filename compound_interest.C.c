//program to calculate compound interest
/*
ADM No.D33-2395-2023.
*/
#include <stdio.h>
#include<math.h>
int main()
{
  float principle, rate, time, compound_interest;
  int n;
  printf("enter principle:\n");
  scanf("%f",&principle);
  printf("enter rate:\n");
  scanf("%f",&rate);
  printf("enter time:\n");
  scanf("%f",&time);
  printf("Number of times compounded (n):\n");
  scanf("%d",&n);
  compound_interest= principle*pow((1+rate/(100*n)), (n*time));
  printf("compount interest:%2f\n",compound_interest);
return 0;
}

