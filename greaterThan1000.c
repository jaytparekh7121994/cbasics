#include<stdio.h>

int main(){
	char n[20];
	int i,j,count=0;
	printf("Enter the value greater than 1000 separate with comma:\n");
	gets(n);
	for(j=0;n[j]!='\0';j++){
		if(n[j]==','){
			j++;
		}
		printf("%d",n[j]-'0');
	}
	return 0;
}