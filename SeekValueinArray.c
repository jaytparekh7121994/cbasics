/*To seek the specified integer from the Array */
#include<stdio.h>
#include<stdlib.h>
int main(){
	short int ARRAY_LEN=0;
	int seek,pos=0,i,flag=0;
	
	printf("Enter the no. of values you want to enter:\n");
	scanf("%d",&ARRAY_LEN);
	
	int n[ARRAY_LEN];
	
	for(i=0;i<ARRAY_LEN;i++){
		scanf("%d",&n[i]);
	}
	
	printf("Enter the value to search:\n");
	scanf("%d",&seek);
	
	for(i=0;i<ARRAY_LEN;i++){
		if(seek==n[i]){
			pos=i;
			flag=1;
			break;
		}
		else{
			flag=0;
		}
	}
	
	if (flag==1){
		printf("At Position %d",pos);
	}
	else if(flag==0){
		printf("Match not found");
	}
	return 0;
}