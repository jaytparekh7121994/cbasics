/*Addition of two one Dimension Array */
#include<stdio.h>
#include<stdlib.h>
int main(){
	int *a,*b,*c;
	int i=0,n;
	printf("How many elements in each array? \n");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	b=(int *)malloc(n*sizeof(int));
	c=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",a+i);
	}
	for(i=0;i<n;i++){
		scanf("%d",b+i);
	}
	for(i=0;i<n;i++){
		*(c+i)=(*(a+i))+(*(b+i));
		printf("%d ",*(a+i));
		printf("+ %d ",*(b+i));
		printf("= %d ",*(c+i));
		printf("\n");
	}
	
	return 0;
}