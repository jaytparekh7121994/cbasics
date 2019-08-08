#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
int main(){
	char n[20];
	int i,j;
	printf("Enter a positive number having a decimal point: ");
	gets(n);
	for(i=0;n[i]!='\0';i++);
	for(j=0;n[j]!='.';j++);
	printf("Number to the left  of decimal: %d \n",j);
	printf("Number to the right of decimal: %d \n",i-j-1);
	getch();
}