//Write a program to print n to 1 using while loop.

#include<stdio.h>
#include<conio.h>

void main(){
int p,r;
clrscr();
r = 1;
printf("Enter any number :");
scanf("%d",&p);
while(p>=r){
printf("%d\n",p);
p--;
}
getch();
}




