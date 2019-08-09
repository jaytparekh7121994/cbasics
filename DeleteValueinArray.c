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
	
	if(flag==1){
		printf("The Value deleted is %d\n",n[pos]);
		for(i=pos+1;i<ARRAY_LEN;i++){
			n[pos]=n[i];
			pos++;
		}
		
		for(i=0;i<ARRAY_LEN-1;i++){
			printf("%d ",n[i]);
		}
		
		//free(n[pos]);
		
	}
	
	return 0;
}