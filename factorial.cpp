#include <stdio.h>

int factorial (int n){
	if (n<=1)
		return (1);
	
	else
		return n*factorial(n-1);	
		
}

int main (void){

	int n=0;

	scanf("%d",&n);
	printf("%d! = %d\n", n, factorial(n));

	return 0;
}
# DataStructure
# DataStructure
