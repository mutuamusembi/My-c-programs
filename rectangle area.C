//program to calculate area of a rectangle.
//user is reqyired to enter length, and width values
//area = length*width.
// D33-2395-2023
#include<stdio.h>
int main() {
int length=0;
int width=0;
printf("length:\n");
scanf("%d",&length);
printf("width:\n");
scanf("%d",&width);
int area=length*width;
printf("area:%d\n",area);
return 0;
}