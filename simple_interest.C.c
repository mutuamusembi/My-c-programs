//program to calculate simple interest
// Felix musembi
/*
ADM NUMBER:
D33-2395-2023
*/
#include <stdio.h>
int main()
{
  int principle;
  int rate;
  int time;
  int simple_interest;
  printf("principle:\n");
  scanf("%d",&principle);
  printf("rate:\n");
  scanf("%d",&rate);
  printf("time:\n");
  scanf("%d",&time);
  simple_interest=principle*rate*time/100;
  printf("simple interest:%d\n", simple_interest);
  return 0;
}