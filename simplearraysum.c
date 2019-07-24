#include<stdio.h>

int simpleArraySum(int ar_count, int* ar) {
    /*
     * Write your code here.
     */
     int i,sum=0;
     for(i=0;i<ar_count;i++){
         sum+=ar[i];
     }
    return sum;
}

int main(){
	int i,ar_count=0;
	scanf("%d",&ar_count);
	int ar[ar_count];
	for(i=0;i<ar_count;i++){
		scanf("%d",&ar[i]);
	}
	printf("sum=%d",simpleArraySum(ar_count,ar));
}