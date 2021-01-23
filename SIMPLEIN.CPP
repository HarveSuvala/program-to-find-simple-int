/* write a program to calculate simple interest */
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
float si,p,r,t;
printf("enter the price");
scanf("%f",&p);
printf("enter the rate");
scanf("%f",&r);
printf("enter the time");
scanf("%f",&t);
si=(p*r*t)/100;
printf("the simple interest=%f",si);
getch();
}