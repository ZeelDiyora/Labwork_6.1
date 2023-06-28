//Write a program to print 1 to n using a while loop.

#include<stdio.h>
#include<conio.h>

void main(){
int z;
int x = 1;
clrscr();
printf("Enter the number :");
scanf("%d",&z);

while(x<=z){
printf("%d\n",x);
x++;
}
getch();
}