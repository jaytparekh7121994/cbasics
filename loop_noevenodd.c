/**************************************************************
Task

For each integer n in the interval[a,b]  (given as input) :

If ,1<=n<=9 then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if n>9 and it is an even number, then print "even".
Else if n>9 and it is an odd number, then print "odd".
Input Format

The first line contains an integer,a . 
The seond line contains an integer,b .

Constraints
1<=a<=b<10^6

Output Format

Print the appropriate english representation,even, or odd, based on the conditions described in the 'task' section.

Note: 

Sample Input

8
11
Sample Output

eight
nine
even
odd
***********************************************************/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a, b,i;
    char *arr[]={"one","two","three","four","five","six","seven","eight","nine","even","odd"};
	printf("Enter the starting no. and the end no.:\n");
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    for(i=a;i<=b;i++){
        (i<=9)?printf("%s\n",arr[i-1]):((i%2==0) ?printf("%s\n",arr[9]):printf("%s\n",arr[10])); //Using Ternary Operator
       // if(i<=9){ //Using if-else conditional loop statements
       //     printf("%s\n",arr[i-1]);
       // }
       // else if(i%2==0){
       //     printf("even\n");
       // }
       // else{
       //     printf("odd\n");
       // }
    }
    return 0;
}
