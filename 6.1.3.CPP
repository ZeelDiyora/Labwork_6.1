//Write a programn to print 1 to N using a do while loop.

#include<stdio.h>
#include<conio.h>

void main(){
int a;
clrscr();
int b = 1;
printf("Enter any number :");
scanf("%d",&a);
do{
printf("%d\n",b);
b++;
}while(b<=a);
getch();
}