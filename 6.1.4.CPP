//Write a proggram to print odd numbers from N to 1 using a while loop.

#include<stdio.h>
#include<conio.h>

void main(){
int e,f;
clrscr();
f = 1;
printf("Enter any number :");
scanf("%d",&f);
printf("odd number between %d and 1 are \n",f);
while(e>=f){
printf("%d",e);
e--;
e%2 !=0;
}
getch();
}

}while();